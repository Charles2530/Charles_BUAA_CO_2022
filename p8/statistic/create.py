import os


def run_mars():
    os.chdir('D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p8\\statistic')
    os.system(
        "java -jar Mars.jar nc db lg ex mc LargeText 100000 test.asm >mips_out.txt")
    os.system(
        "java -jar Mars.jar nc a db mc CompactDataAtZero dump 0x00003000-0x0000417c HexText ../mips/text.txt test.asm > mips_log.txt")
    os.system(
        "java -jar Mars.jar nc a db mc CompactDataAtZero dump 0x00004180-0x00004f00 HexText ../mips/handler.txt test.asm > mips_log.txt")
    with open("../mips/text.txt", "r") as text_file:
        with open("../mips/handler.txt", "r") as handler_file:
            with open("../mips/code.txt", "w") as code_file:
                for i in range(0x3000, 0x4180, 4):
                    ret1 = text_file.readline()
                    if (ret1):
                        code_file.write(ret1)
                    else:
                        code_file.write("00000000\n")
                code_file.write(handler_file.read())


if __name__ == '__main__':
    run_mars()
    os.chdir('D:\\coding_file\\study\\Lesson\\co_lesson\\lesson\\p8\\mips')
    with open("code.txt", "r") as f:
        data = f.readlines()

    for i in range(len(data)):
        if i != len(data) - 1:
            data[i] = data[i][:-1] + ",\n"
        else:
            data[i] = data[i][:-1] + ";\n"

    with open("fpga.coe", "w") as f:
        f.write("memory_initialization_radix=16;\nmemory_initialization_vector=\n")
        f.writelines(data)
