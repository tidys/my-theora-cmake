#include <stdio.h>
#include <iostream>
#include "codec.h"
#include "theora.h"
using namespace std;
int main(){
    th_pixel_fmt f;
    ogg_uint32_t version = th_version_number();
    cout << "theora: " << version << endl;
    th_comment_clear(nullptr);
    system("pause");
    return 0;
}