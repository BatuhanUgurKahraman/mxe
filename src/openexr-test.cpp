/*
 * This file is part of MXE. See LICENSE.md for licensing information.
 */

#include <ImfChannelList.h>
#include <ImfInputFile.h>

using namespace Imf;
using namespace Imath;

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    InputFile file("some-file.exr");
    Box2i dw = file.header().dataWindow();

    return 0;
}
