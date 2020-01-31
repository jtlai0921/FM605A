#include "FlagPCM.h"

const unsigned char BGM[] PROGMEM = {
140, 148, 92, 119, 73, 196, 94, 170, 82, 109, 211, 104, 186, 80, 210, 59, 128, 97, 163, 190, 92, 106, 7, 158, 101, 220, 81, 82, 134, 53, 146, 140, 221, 164, 147, 94, 89, 153, 122, 131, 130, 165, 131, 108, 44, 57, 133, 165, 154, 195, 160, 136, 101, 59, 99, 143, 182, 104, 150, 120, 114, 100, 88, 108, 152, 165, 96, 181, 146, 132, 113, 92, 111, 109, 143, 107, 139, 163, 112, 119, 104, 93, 157, 140, 130, 144, 195, 142, 117, 106, 103, 137, 97, 128, 116, 184, 87, 88, 120, 79, 169, 105, 153, 108, 160, 120, 122, 153, 118, 160, 98, 102, 103, 175, 136, 106, 145, 113, 155, 93, 109, 150, 150, 161, 103, 162, 105, 113, 107, 82, 155, 116, 151, 89, 124, 105, 129, 143, 94, 188, 126, 149, 87, 136, 157, 117, 155, 72, 171, 83, 122, 95, 144, 145, 126, 160, 83, 156, 97, 157, 115, 165, 150, 122, 119, 51, 144, 107, 143, 111, 150, 117, 104, 128, 108, 163, 136, 154, 130, 140, 106, 117, 128, 114, 134, 131, 125, 96, 119, 99, 132, 148, 156, 148, 128, 109, 119, 142, 130, 139, 141, 143, 86, 102, 95, 130, 144, 119, 139, 121, 142, 101, 133, 130, 160, 144, 139, 106, 113, 128, 100, 128, 114, 164, 118, 100, 101, 108, 176, 133, 145, 138, 146, 116, 98, 129, 124, 164, 122, 105, 107, 121, 112, 103, 141, 129, 170, 141, 94, 124, 137, 154, 112, 155, 117, 139, 116, 66, 128, 135, 156, 89, 146, 107, 127, 158, 91, 164, 142, 162, 95, 141, 102, 123, 153, 89, 130, 122, 153, 61, 149, 95, 160, 158, 115, 137, 124, 169, 67, 168, 117, 125, 147, 87, 123, 100, 158, 79, 163, 105, 134, 145, 138, 111, 133, 178, 92, 164, 89, 137, 125, 120, 112, 110, 162, 73, 149, 108, 129, 144, 152, 132, 113, 160, 102, 157, 110, 122, 141, 125, 102, 90, 150, 111, 134, 125, 122, 144, 134, 128, 120, 161, 130, 139, 128, 95, 133, 120, 120, 106, 130, 143, 113, 117, 98, 147, 163, 134, 129, 140, 143, 109, 119, 112, 148, 138, 110, 110, 107, 126, 115, 122, 135, 142, 167, 121, 104, 128, 141, 159, 115, 130, 123, 133, 87, 98, 134, 137, 147, 98, 145, 108, 146, 124, 124, 165, 141, 162, 87, 106, 110, 139, 133, 103, 144, 115, 133, 76, 128, 144, 155, 164, 110, 148, 114, 134, 112, 117, 156, 130, 134, 81, 107, 118, 132, 122, 138, 166, 123, 132, 93, 139, 156, 144, 144, 105, 135, 103, 103, 115, 105, 162, 133, 121, 105, 123, 127, 138, 140, 156, 156, 130, 97, 99, 135, 125, 130, 128, 118, 121, 113, 91, 131, 138, 169, 139, 135, 117, 119, 145, 105, 146, 131, 149, 97, 95, 106, 111, 153, 103, 163, 124, 142, 106, 124, 143, 133, 175, 110, 146, 87, 127, 94, 119, 141, 121, 158, 78, 136, 103, 151, 131, 141, 169, 124, 143, 87, 135, 111, 141, 121, 123, 131, 98, 119, 94, 142, 136, 159, 141, 111, 143, 114, 144, 120, 139, 147, 115, 119, 73, 139, 115, 130, 123, 134, 150, 105, 141, 97, 173, 136, 150, 132, 111, 137, 84, 145, 80, 158, 133, 121, 107, 95, 158, 109, 168, 104, 179, 136, 120, 115, 111, 162, 96, 158, 87, 139, 111, 105, 113, 114, 169, 124, 165, 91, 144, 134, 137, 127, 128, 163, 103, 125, 77, 127, 131, 120, 123, 123, 148, 111, 135, 114, 147, 148, 149, 128, 122, 124, 109, 126, 106, 133, 131, 127, 94, 111, 140, 129, 145, 124, 154, 141, 124, 118, 127, 143, 119, 131, 115, 116, 112, 118, 108, 127, 137, 139, 138, 114, 134, 143, 139, 130, 134, 147, 112, 109, 109, 120, 130, 114, 124, 121, 132, 119, 122, 144, 135, 170, 112, 136, 113, 133, 138, 92, 140, 110, 142, 89, 116, 112, 137, 147, 113, 148, 125, 147, 118, 139, 134, 133, 134, 106, 115, 121, 118, 113, 118, 120, 131, 135, 125, 122, 150, 132, 137, 132, 141, 127, 116, 125, 102, 149, 99, 117, 118, 119, 127, 121, 153, 108, 157, 125, 139, 128, 140, 130, 120, 132, 94, 145, 104, 114, 114, 137, 116, 119, 146, 125, 143, 129, 133, 137, 147, 111, 129, 124, 116, 115, 131, 108, 109, 135, 111, 139, 124, 145, 121, 152, 117, 137, 152, 112, 131, 112, 144, 89, 141, 102, 123, 123, 109, 143, 123, 154, 97, 168, 116, 145, 135, 128, 130, 100, 150, 87, 150, 91, 134, 113, 117, 127, 128, 159, 103, 158, 118, 157, 112, 137, 130, 115, 140, 92, 147, 95, 130, 105, 127, 131, 126, 154, 113, 142, 117, 158, 125, 132, 131, 120, 131, 95, 133, 112, 132, 108, 116, 138, 121, 142, 121, 144, 130, 144, 137, 120, 133, 117, 129, 114, 126, 120, 123, 112, 103, 135, 135, 141, 125, 137, 133, 132, 140, 119, 140, 126, 124, 118, 119, 117, 116, 122, 109, 131, 137, 141, 117, 128, 130, 140, 148, 125, 132, 126, 118, 112, 122, 126, 122, 129, 114, 123, 116, 136, 133, 138, 136, 125, 147, 128, 122, 126, 124, 127, 128, 124, 115, 100, 128, 105, 141, 136, 135, 140, 114, 134, 120, 164, 112, 143, 117, 123, 114, 110, 136, 97, 148, 92, 151, 121, 133, 125, 124, 152, 114, 172, 100, 141, 107, 130, 119, 118, 141, 99, 142, 86, 140, 125, 149, 120, 133, 142, 119, 151, 107, 141, 118, 138, 113, 123, 125, 109, 122, 110, 128, 136, 148, 116, 131, 122, 138, 138, 138, 123, 127, 129, 110, 120, 120, 134, 109, 130, 104, 141, 134, 123, 135, 127, 146, 122, 144, 112, 132, 121, 128, 119, 126, 126, 107, 124, 106, 141, 136, 136, 121, 133, 132, 131, 134, 126, 129, 127, 130, 110, 128, 118, 119, 118, 127, 122, 138, 132, 124, 133, 124, 143, 128, 142, 112, 127, 127, 114, 130, 120, 129, 106, 132, 109, 141, 130, 135, 132, 124, 136, 122, 151, 104, 134, 124, 132, 118, 117, 125, 106, 139, 105, 148, 128, 138, 121, 126, 137, 122, 155, 110, 133, 118, 132, 115, 120, 128, 111, 142, 105, 135, 128, 142, 122, 129, 138, 125, 144, 112, 126, 127, 131, 120, 121, 123, 111, 128, 121, 127, 134, 143, 125, 126, 126, 132, 141, 127, 119, 131, 128, 118, 118, 124, 122, 123, 128, 122, 132, 137, 123, 133, 127, 135, 136, 126, 120, 119, 136, 118, 126, 121, 122, 123, 119, 126, 128, 145, 126, 131, 126, 128, 135, 123, 131, 120, 136, 118, 122, 121, 115, 128, 119, 136, 123, 141, 125, 127, 130, 124, 143, 122, 133, 118, 131, 121, 119, 127, 119, 130, 116, 131, 123, 136, 127, 132, 132, 129, 131, 124, 130, 120, 129, 124, 126, 124, 118, 125, 117, 129, 127, 137, 131, 128, 129, 131, 125, 127, 130, 130, 130, 116, 130, 115, 126, 120, 122, 133, 122, 137, 125, 133, 125, 130, 133, 125, 132, 122, 135, 115, 127, 120, 126, 129, 115, 131, 123, 135, 125, 133, 131, 130, 130, 124, 130, 122, 133, 120, 128, 121, 121, 129, 118, 124, 125, 135, 131, 128, 130, 129, 128, 127, 127, 131, 131, 124, 120, 122, 123, 124, 129, 118, 129, 129, 133, 129, 125, 133, 127, 134, 123, 123, 132, 128, 126, 119, 125, 122, 129, 118, 123, 135, 130, 132, 123, 134, 123, 130, 131, 123, 136, 127, 126, 117, 119, 127, 130, 128, 113, 135, 132, 127, 125, 128, 138, 123, 135, 117, 132, 131, 121, 127, 118, 130, 123, 132, 110, 125, 139, 129, 136, 115, 146, 109, 171, 134, 72, 90, 39, 217, 128, 165, 117, 206, 143, 47, 130, 86, 253, 74, 132, 98, 191, 141, 12, 165, 38, 191, 174, 155, 85, 28, 115, 7, 243, 168, 216, 121, 109, 33, 123, 194, 101, 237, 108, 162, 54, 118, 45, 90, 188, 83, 233, 151, 108, 71, 128, 103, 112, 188, 93, 174, 127, 104, 81, 189, 102, 99, 134, 84, 137, 180, 143, 93, 155, 79, 89, 108, 113, 152, 218, 133, 64, 153, 110, 99, 105, 147, 140, 203, 123, 85, 143, 102, 114, 118, 142, 104, 195, 119, 62, 124, 131, 130, 103, 113, 101, 168, 104, 96, 155, 172, 111, 116, 113, 100, 180, 138, 137, 128, 145, 112, 120, 86, 112, 176, 141, 112, 106, 159, 99, 130, 95, 120, 175, 103, 122, 103, 150, 109, 138, 119, 90, 156, 120, 135, 104, 150, 137, 141, 117, 75, 179, 115, 127, 121, 144, 150, 88, 132, 78, 163, 129, 138, 141, 102, 142, 97, 148, 76, 176, 139, 111, 118, 77, 169, 103, 154, 104, 146, 140, 83, 135, 98, 169, 135, 145, 107, 123, 122, 107, 117, 133, 149, 158, 106, 96, 123, 123, 146, 108, 163, 135, 143, 87, 100, 143, 125, 164, 91, 166, 74, 158, 65, 141, 147, 123, 189, 43, 172, 68, 171, 103, 124, 197, 79, 176, 28, 162, 101, 164, 123, 124, 176, 54, 169, 58, 167, 130, 162, 129, 85, 160, 68, 159, 103, 143, 150, 132, 106, 88, 153, 100, 155, 143, 124, 143, 102, 111, 101, 155, 144, 125, 160, 77, 129, 118, 109, 140, 142, 152, 108, 150, 69, 137, 128, 144, 132, 135, 135, 83, 158, 79, 134, 158, 119, 149, 101, 123, 103, 147, 127, 117, 168, 119, 123, 95, 118, 126, 160, 131, 100, 147, 108, 129, 109, 122, 148, 145, 143, 77, 144, 116, 136, 124, 112, 158, 130, 132, 60, 146, 135, 148, 130, 98, 150, 121, 135, 80, 158, 140, 147, 111, 92, 129, 141, 144, 80, 154, 128, 159, 88, 101, 134, 153, 158, 68, 161, 115, 147, 103, 95, 150, 141, 165, 62, 136, 113, 162, 106, 120, 132, 151, 145, 59, 152, 121, 174, 102, 100, 145, 122, 158, 69, 135, 137, 147, 132, 94, 130, 128, 154, 96, 139, 136, 146, 110, 90, 135, 138, 152, 102, 116, 139, 124, 124, 111, 136, 142, 133, 121, 121, 126, 127, 125, 122, 129, 135, 131, 115, 106, 125, 140, 132, 131, 122, 137, 113, 121, 134, 134, 136, 113, 131, 118, 127, 111, 140, 138, 114, 126, 122, 141, 113, 133, 129, 126, 150, 115, 131, 99, 133, 128, 138, 119, 118, 144, 106, 113, 121, 164, 124, 124, 110, 127, 144, 119, 124, 118, 144, 113, 138, 102, 126, 130, 141, 107, 121, 158, 111, 135, 91, 153, 133, 158, 94, 116, 145, 100, 144, 97, 159, 113, 153, 88, 115, 156, 117, 145, 102, 157, 109, 164, 89, 117, 139, 123, 142, 101, 147, 96, 157, 90, 128, 145, 146, 115, 114, 139, 114, 161, 98, 145, 107, 150, 96, 129, 135, 103, 164, 84, 154, 101, 166, 96, 133, 136, 114, 168, 93, 157, 78, 164, 88, 148, 125, 112, 146, 87, 154, 98, 167, 100, 139, 142, 109, 144, 109, 153, 103, 134, 114, 132, 137, 102, 131, 115, 134, 125, 133, 129, 117, 147, 117, 127, 133, 134, 134, 98, 131, 114, 149, 107, 116, 134, 121, 144, 99, 148, 109, 154, 124, 114, 149, 118, 154, 77, 133, 120, 150, 123, 102, 136, 112, 146, 102, 143, 122, 145, 129, 111, 135, 127, 148, 100, 117, 128, 138, 126, 100, 125, 128, 138, 125, 118, 134, 125, 144, 113, 134, 137, 132, 127, 90, 137, 127, 141, 111, 116, 133, 120, 140, 104, 143, 128, 149, 116, 126, 135, 120, 145, 91, 140, 122, 138, 112, 111, 128, 116, 157, 100, 115, 134, 141, 123, 124, 162, 116, 126, 96, 109, 147, 134, 129, 112, 134, 94, 129, 136, 115, 154, 141, 130, 107, 134, 112, 132, 134, 114, 145, 121, 111, 99, 139, 117, 131, 151, 113, 135, 118, 126, 124, 155, 126, 122, 135, 101, 124, 116, 135, 117, 147, 113, 112, 133, 110, 138, 133, 149, 117, 151, 115, 104, 126, 123, 143, 117, 134, 103, 137, 103, 108, 148, 137, 141, 110, 146, 105, 138, 130, 123, 140, 118, 134, 103, 121, 102, 143, 136, 113, 124, 131, 136, 103, 136, 137, 151, 136, 108, 126, 117, 120, 117, 132, 136, 117, 130, 109, 110, 131, 139, 144, 123, 134, 131, 134, 109, 116, 141, 133, 124, 104, 137, 108, 123, 116, 126, 148, 120, 142, 113, 136, 123, 142, 137, 114, 129, 122, 127, 98, 132, 124, 134, 119, 110, 137, 123, 136, 121, 146, 136, 127, 131, 116, 123, 119, 132, 123, 123, 119, 122, 124, 110, 130, 137, 139, 128, 129, 135, 126, 130, 125, 130, 126, 117, 121, 121, 118, 119, 134, 119, 126, 126, 136, 131, 128, 136, 132, 139, 119, 124, 126, 120, 118, 127, 125, 115, 127, 118, 123, 127, 133, 136, 133, 133, 129, 133, 126, 122, 131, 125, 116, 132, 120, 117, 116, 130, 127, 123, 128, 125, 146, 128, 132, 125, 141, 120, 122, 123, 108, 138, 119, 121, 116, 120, 127, 119, 139, 121, 149, 129, 133, 123, 127, 132, 122, 137, 104, 131, 115, 120, 114, 126, 127, 126, 139, 113, 145, 119, 146, 132, 124, 139, 108, 149, 90, 132, 115, 133, 127, 105, 129, 113, 146, 109, 154, 122, 148, 131, 115, 138, 105, 155, 99, 135, 109, 122, 132, 100, 129, 114, 155, 112, 143, 120, 138, 140, 115, 140, 118, 148, 102, 124, 111, 118, 133, 118, 126, 115, 137, 118, 139, 124, 137, 147, 130, 125, 118, 137, 114, 121, 121, 127, 122, 119, 119, 115, 134, 121, 151, 128, 131, 129, 134, 134, 114, 139, 119, 130, 104, 125, 116, 122, 127, 115, 141, 111, 150, 120, 137, 130, 134, 146, 113, 135, 108, 138, 103, 129, 115, 127, 127, 108, 136, 109, 157, 119, 143, 128, 130, 140, 118, 132, 111, 139, 112, 125, 112, 121, 126, 119, 129, 116, 152, 126, 134, 125, 132, 138, 130, 129, 114, 130, 117, 118, 115, 119, 130, 125, 127, 113, 142, 135, 129, 134, 131, 142, 126, 128, 115, 123, 122, 123, 121, 115, 125, 119, 132, 108, 145, 136, 138, 131, 122, 146, 115, 140, 114, 131, 119, 116, 125, 105, 130, 114, 142, 116, 137, 132, 132, 134, 120, 149, 125, 140, 110, 127, 112, 117, 127, 114, 132, 116, 132, 116, 132, 131, 134, 145, 126, 135, 130, 127, 120, 121, 120, 123, 125, 118, 113, 127, 121, 124, 136, 136, 133, 132, 134, 124, 138, 124, 133, 121, 119, 116, 120, 122, 108, 134, 122, 127, 130, 131, 133, 129, 140, 129, 138, 125, 124, 127, 116, 118, 117, 128, 112, 128, 121, 119, 135, 132, 137, 126, 140, 130, 134, 129, 117, 134, 118, 121, 115, 121, 116, 122, 131, 110, 137, 135, 138, 124, 130, 139, 134, 134, 113, 136, 121, 116, 111, 121, 123, 121, 132, 112, 130, 134, 140, 125, 127, 141, 138, 135, 110, 129, 129, 121, 110, 116, 130, 120, 126, 112, 127, 139, 141, 127, 127, 136, 140, 132, 117, 125, 131, 130, 106, 110, 126, 125, 125, 117, 121, 142, 139, 127, 122, 135, 142, 132, 126, 123, 126, 128, 109, 111, 125, 129, 126, 120, 115, 133, 143, 130, 125, 137, 146, 127, 122, 121, 125, 131, 115, 112, 124, 124, 119, 121, 120, 129, 147, 137, 124, 127, 139, 130, 126, 129, 127, 132, 113, 109, 118, 124, 123, 125, 131, 124, 137, 130, 136, 126, 116, 71, 108, 128, 131, 185, 108, 168, 126, 110, 117, 103, 156, 150, 146, 49, 163, 192, 107, 84, 98, 131, 139, 179, 90, 99, 77, 37, 78, 225, 180, 150, 134, 96, 88, 152, 160, 146, 182, 112, 151, 103, 66, 47, 134, 131, 100, 198, 148, 138, 68, 127, 86, 174, 127, 124, 183, 98, 151, 82, 166, 44, 126, 129, 84, 162, 128, 194, 74, 124, 57, 152, 125, 107, 187, 144, 184, 49, 142, 88, 106, 140, 104, 175, 116, 176, 109, 112, 105, 124, 156, 110, 138, 133, 165, 92, 79, 128, 104, 125, 89, 123, 140, 116, 142, 107, 162, 130, 133, 131, 109, 150, 139, 173, 80, 144, 101, 128, 95, 97, 164, 106, 169, 85, 150, 150, 100, 131, 88, 155, 122, 142, 123, 106, 131, 83, 122, 95, 155, 133, 135, 140, 100, 174, 92, 151, 122, 141, 152, 93, 151, 76, 160, 77, 140, 123, 125, 147, 78, 170, 85, 189, 111, 127, 163, 83, 156, 50, 175, 109, 148, 107, 108, 144, 77, 142, 83, 207, 108, 170, 105, 123, 144, 80, 169, 84, 177, 133, 102, 93, 77, 171, 119, 147, 104, 161, 138, 99, 111, 136, 190, 108, 132, 99, 129, 130, 83, 112, 121, 173, 129, 96, 99, 114, 168, 129, 124, 149, 175, 112, 72, 109, 130, 181, 112, 100, 114, 130, 127, 77, 141, 142, 178, 138, 86, 123, 141, 141, 101, 140, 137, 156, 97, 66, 106, 142, 172, 97, 136, 124, 138, 129, 81, 149, 163, 175, 100, 105, 110, 125, 121, 112, 131, 137, 144, 78, 120, 118, 155, 147, 125, 141, 132, 152, 83, 112, 133, 151, 137, 104, 105, 98, 139, 100, 154, 130, 152, 118, 125, 125, 112, 171, 113, 154, 100, 128, 117, 106, 118, 106, 161, 110, 144, 104, 134, 116, 137, 156, 126, 160, 94, 148, 96, 112, 133, 133, 142, 85, 124, 109, 144, 117, 134, 142, 148, 130, 116, 131, 111, 155, 124, 122, 116, 123, 123, 92, 118, 121, 163, 134, 107, 120, 140, 135, 127, 142, 134, 138, 119, 96, 115, 134, 127, 123, 111, 118, 123, 140, 118, 121, 155, 141, 144, 111, 120, 129, 139, 114, 113, 148, 111, 112, 94, 127, 129, 149, 140, 117, 135, 118, 144, 127, 132, 132, 147, 121, 87, 122, 120, 129, 110, 128, 135, 127, 127, 115, 130, 138, 149, 150, 122, 109, 122, 125, 121, 112, 133, 136, 110, 96, 125, 131, 141, 143, 126, 137, 131, 138, 113, 122, 138, 131, 149, 92, 98, 129, 120, 114, 129, 144, 135, 133, 112, 115, 148, 151, 123, 140, 120, 114, 119, 112, 97, 150, 134, 108, 124, 106, 136, 137, 141, 115, 157, 150, 105, 124, 115, 128, 134, 133, 96, 129, 121, 95, 129, 119, 146, 147, 143, 97, 133, 147, 116, 139, 131, 131, 123, 118, 88, 122, 138, 104, 148, 113, 129, 131, 145, 106, 128, 165, 126, 142, 107, 119, 119, 132, 103, 130, 134, 94, 131, 122, 121, 133, 154, 125, 124, 142, 118, 148, 116, 117, 133, 136, 105, 107, 128, 102, 136, 133, 116, 136, 141, 122, 129, 135, 128, 150, 135, 102, 124, 128, 118, 110, 125, 108, 130, 140, 96, 138, 141, 140, 125, 131, 129, 139, 147, 91, 138, 125, 128, 101, 121, 111, 119, 155, 92, 146, 127, 147, 116, 133, 132, 136, 167, 78, 135, 119, 134, 106, 114, 127, 110, 151, 84, 139, 133, 152, 122, 135, 136, 115, 157, 90, 144, 120, 141, 108, 104, 124, 97, 153, 104, 136, 140, 145, 116, 115, 145, 125, 156, 117, 130, 119, 124, 101, 108, 138, 114, 136, 120, 119, 121, 144, 125, 128, 152, 135, 132, 116, 119, 120, 138, 116, 115, 135, 109, 102, 122, 134, 125, 153, 133, 122, 134, 127, 122, 130, 144, 119, 137, 112, 93, 131, 111, 111, 110, 153, 144, 104, 150, 98, 154, 131, 128, 127, 148, 136, 87, 129, 94, 141, 121, 122, 115, 141, 129, 92, 148, 127, 154, 134, 130, 110, 139, 121, 108, 136, 119, 137, 106, 107, 93, 154, 132, 124, 140, 141, 130, 114, 125, 115, 166, 124, 129, 105, 121, 107, 110, 125, 107, 167, 120, 130, 93, 150, 131, 135, 136, 126, 163, 97, 125, 83, 153, 117, 128, 118, 106, 142, 100, 147, 100, 166, 139, 140, 112, 111, 150, 112, 142, 96, 155, 111, 116, 89, 117, 150, 115, 153, 110, 149, 118, 132, 117, 130, 155, 126, 134, 99, 121, 113, 130, 103, 124, 149, 117, 127, 106, 140, 138, 140, 130, 127, 143, 111, 123, 115, 125, 124, 133, 108, 107, 132, 114, 139, 118, 145, 141, 132, 120, 112, 151, 118, 134, 123, 127, 110, 117, 111, 114, 139, 119, 143, 117, 133, 125, 136, 133, 117, 156, 120, 129, 107, 130, 114, 122, 123, 114, 135, 108, 134, 120, 141, 127, 140, 137, 117, 134, 123, 133, 116, 133, 116, 122, 115, 111, 132, 116, 134, 126, 140, 126, 130, 131, 129, 134, 126, 135, 119, 130, 113, 116, 123, 115, 131, 117, 128, 123, 134, 133, 127, 133, 136, 130, 126, 126, 121, 133, 112, 125, 116, 124, 112, 120, 135, 118, 142, 120, 142, 121, 134, 123, 128, 144, 107, 145, 110, 115, 114, 124, 128, 112, 133, 120, 137, 126, 123, 134, 136, 130, 125, 138, 113, 124, 133, 113, 120, 122, 128, 115, 113, 128, 130, 148, 117, 131, 135, 132, 117, 129, 138, 115, 147, 101, 123, 111, 129, 123, 111, 143, 111, 158, 106, 134, 123, 147, 127, 118, 149, 97, 157, 90, 136, 107, 140, 126, 99, 148, 95, 166, 103, 152, 111, 150, 123, 112, 152, 92, 166, 95, 147, 89, 141, 121, 106, 139, 109, 162, 108, 149, 98, 156, 117, 127, 142, 114, 145, 102, 140, 92, 140, 123, 123, 123, 121, 134, 125, 143, 106, 154, 118, 138, 117, 128, 128, 119, 136, 101, 138, 113, 130, 106, 137, 124, 136, 137, 115, 140, 113, 142, 118, 138, 121, 130, 126, 107, 124, 121, 136, 107, 139, 122, 134, 123, 125, 140, 120, 137, 124, 136, 116, 125, 124, 124, 121, 123, 133, 111, 125, 122, 140, 127, 125, 142, 118, 132, 113, 139, 129, 127, 120, 123, 128, 113, 125, 120, 129, 130, 134, 127, 123, 133, 122, 129, 129, 130, 136, 124, 110, 119, 132, 126, 120, 127, 125, 130, 128, 117, 133, 139, 131, 119, 130, 126, 126, 132, 112, 126, 132, 131, 114, 116, 124, 130, 140, 114, 133, 139, 129, 110, 123, 138, 129, 138, 109, 126, 125, 126, 116, 120, 133, 127, 144, 107, 124, 137, 133, 120, 118, 140, 129, 133, 103, 123, 134, 130, 122, 118, 131, 122, 134, 114, 129, 139, 135, 120, 116, 128, 133, 135, 112, 123, 133, 128, 121, 116, 130, 126, 137, 120, 128, 136, 126, 123, 120, 131, 131, 138, 114, 116, 130, 124, 133, 117, 129, 124, 133, 123, 117, 142, 124, 130, 120, 125, 128, 131, 125, 115, 137, 119, 132, 119, 123, 126, 128, 133, 119, 140, 123, 123, 124, 121, 132, 129, 130, 118, 128, 120, 126, 130, 124, 128, 125, 128, 124, 130, 127, 123, 128, 125, 127, 127, 126, 123, 125, 123, 128, 135, 118, 127, 120, 129, 130, 131, 130, 122, 127, 117, 132, 123, 130, 129, 129, 121, 117, 138, 118, 133, 119, 130, 134, 127, 126, 118, 132, 117, 133, 127, 125, 127, 126, 122, 117, 138, 126, 132, 121, 120, 131, 132, 126, 121, 133, 122, 123, 126, 123, 127, 131, 124, 122, 132, 126, 127, 125, 117, 130, 139, 128, 117, 126, 123, 126, 127, 123, 130, 132, 121, 118, 130, 133, 123, 138, 104, 158, 109, 103, 129, 86, 183, 130, 176, 68, 142, 203, 92, 157, 101, 148, 67, 139, 130, 174, 135, 81, 110, 54, 159, 140, 221, 25, 69, 89, 109, 200, 110, 178, 165, 149, 38, 93, 193, 149, 136, 135, 145, 123, 94, 23, 89, 141, 180, 187, 176, 71, 105, 135, 51, 94, 160, 238, 126, 116, 53, 150, 139, 40, 132, 162, 187, 70, 161, 103, 106, 150, 66, 137, 92, 179, 141, 145, 87, 104, 211, 85, 86, 110, 184, 109, 136, 155, 164, 140, 42, 100, 129, 154, 129, 155, 141, 76, 117, 102, 97, 112, 136, 171, 121, 95, 120, 153, 126, 93, 154, 164, 119, 111, 126, 153, 125, 117, 135, 142, 97, 107, 134, 125, 138, 133, 166, 100, 90, 114, 122, 140, 98, 157, 154, 95, 91, 107, 138, 123, 133, 149, 143, 116, 113, 123, 127, 143, 126, 162, 101, 97, 132, 118, 138, 113, 144, 149, 84, 116, 110, 163, 149, 111, 142, 116, 125, 89, 126, 121, 143, 138, 125, 107, 99, 143, 97, 154, 125, 156, 167, 67, 123, 98, 190, 104, 130, 135, 101, 145, 67, 136, 121, 195, 94, 135, 108, 112, 166, 98, 144, 114, 212, 69, 95, 111, 107, 180, 94, 134, 103, 189, 58, 109, 141, 133, 189, 113, 113, 75, 202, 86, 110, 143, 120, 174, 88, 88, 76, 216, 102, 117, 149, 128, 139, 108, 104, 94, 228, 115, 97, 118, 101, 131, 127, 106, 102, 197, 133, 68, 122, 126, 145, 161, 115, 105, 170, 123, 69, 124, 143, 134, 148, 97, 89, 144, 136, 92, 133, 171, 123, 160, 88, 96, 144, 151, 125, 112, 154, 92, 131, 92, 103, 156, 147, 130, 103, 150, 95, 140, 127, 128, 159, 120, 134, 85, 135, 95, 135, 147, 111, 146, 92, 134, 107, 139, 143, 134, 154, 107, 139, 87, 138, 128, 137, 126, 107, 139, 94, 136, 73, 167, 151, 132, 121, 103, 151, 113, 148, 104, 141, 154, 109, 102, 97, 126, 137, 151, 89, 129, 151, 122, 98, 121, 164, 148, 144, 78, 124, 145, 125, 93, 131, 131, 138, 136, 66, 118, 147, 169, 101, 135, 137, 134, 141, 70, 138, 152, 163, 81, 113, 117, 119, 151, 78, 140, 140, 172, 87, 113, 133, 138, 171, 86, 136, 129, 152, 78, 100, 143, 126, 166, 80, 118, 123, 151, 119, 122, 150, 129, 159, 96, 109, 123, 155, 114, 117, 120, 126, 130, 95, 113, 134, 166, 120, 124, 133, 118, 139, 119, 136, 124, 142, 108, 121, 101, 121, 133, 134, 120, 113, 150, 106, 143, 112, 157, 124, 135, 130, 107, 136, 84, 159, 111, 132, 107, 122, 139, 86, 155, 110, 170, 121, 129, 122, 119, 142, 113, 143, 105, 140, 116, 114, 100, 121, 157, 110, 133, 114, 148, 134, 114, 123, 139, 154, 121, 109, 106, 125, 131, 129, 105, 121, 143, 120, 110, 118, 136, 164, 124, 124, 118, 145, 124, 100, 131, 122, 152, 112, 100, 103, 136, 139, 118, 129, 129, 153, 126, 112, 113, 151, 146, 112, 120, 112, 136, 108, 115, 112, 144, 142, 112, 117, 117, 145, 142, 132, 117, 145, 136, 112, 102, 118, 143, 132, 117, 106, 124, 130, 113, 120, 145, 136, 150, 121, 117, 115, 138, 132, 122, 123, 125, 130, 101, 110, 109, 158, 123, 125, 133, 121, 137, 110, 147, 126, 143, 127, 116, 117, 105, 131, 118, 141, 106, 138, 118, 120, 114, 132, 148, 133, 149, 116, 128, 106, 128, 122, 134, 129, 115, 131, 103, 117, 114, 149, 130, 140, 126, 129, 130, 119, 129, 118, 157, 115, 130, 103, 113, 120, 126, 133, 117, 149, 115, 129, 106, 138, 141, 147, 134, 101, 142, 109, 121, 112, 129, 137, 126, 125, 94, 131, 127, 134, 133, 141, 138, 129, 126, 93, 133, 141, 128, 123, 119, 117, 114, 123, 119, 121, 149, 131, 119, 128, 122, 136, 134, 126, 119, 143, 117, 106, 123, 124, 118, 127, 138, 116, 127, 124, 120, 142, 127, 132, 145, 125, 103, 118, 135, 118, 127, 127, 121, 118, 119, 120, 126, 137, 120, 152, 134, 107, 131, 138, 126, 102, 135, 136, 129, 107, 101, 132, 135, 122, 114, 150, 121, 130, 131, 121, 133, 133, 138, 107, 122, 119, 137, 120, 102, 116, 151, 134, 98, 129, 134, 144, 113, 130, 136, 149, 114, 101, 135, 117, 138, 116, 126, 106, 129, 144, 107, 122, 119, 162, 129, 117, 120, 151, 130, 86, 132, 136, 147, 101, 114, 123, 120, 135, 110, 144, 126, 134, 136, 116, 121, 131, 150, 108, 118, 127, 139, 117, 92, 126, 132, 151, 107, 121, 139, 118, 133, 118, 148, 135, 132, 109, 113, 126, 125, 131, 118, 129, 114, 141, 109, 113, 138, 136, 147, 116, 137, 128, 123, 107, 115, 154, 132, 119, 109, 125, 108, 129, 127, 132, 146, 125, 126, 113, 131, 132, 137, 132, 108, 140, 124, 108, 109, 129, 133, 135, 127, 112, 135, 123, 121, 127, 150, 144, 122, 120, 94, 134, 131, 124, 128, 132, 121, 110, 123, 111, 141, 144, 135, 124, 129, 130, 114, 129, 105, 153, 148, 116, 102, 113, 130, 116, 140, 120, 146, 131, 121, 109, 125, 142, 138, 147, 94, 127, 124, 127, 103, 123, 147, 128, 135, 89, 135, 129, 136, 121, 139, 140, 131, 120, 98, 118, 133, 153, 113, 130, 100, 135, 120, 106, 139, 138, 163, 98, 129, 110, 146, 124, 114, 138, 124, 147, 83, 140, 89, 150, 131, 125, 139, 106, 155, 93, 142, 110, 165, 139, 106, 111, 113, 144, 102, 146, 111, 148, 113, 113, 125, 121, 146, 123, 149, 112, 140, 118, 120, 106, 136, 142, 129, 121, 101, 132, 113, 132, 122, 155, 124, 128, 120, 118, 135, 120, 147, 113, 136, 108, 128, 117, 113, 134, 129, 139, 112, 139, 112, 134, 122, 135, 146, 122, 128, 107, 127, 110, 134, 133, 127, 122, 118, 121, 119, 134, 127, 146, 129, 124, 124, 122, 121, 124, 133, 127, 127, 122, 120, 110, 126, 122, 142, 138, 121, 132, 117, 128, 121, 139, 133, 127, 124, 108, 126, 117, 133, 120, 134, 124, 125, 131, 111, 137, 129, 139, 128, 126, 132, 109, 128, 110, 138, 130, 126, 122, 111, 129, 114, 146, 122, 143, 127, 128, 121, 113, 142, 119, 137, 112, 134, 121, 114, 121, 117, 144, 120, 138, 123, 132, 121, 125, 135, 122, 145, 122, 122, 109, 123, 132, 121, 130, 118, 137, 122, 115, 129, 138, 136, 124, 131, 124, 129, 124, 116, 126, 130, 132, 118, 123, 116, 125, 136, 118, 133, 138, 136, 117, 120, 127, 135, 137, 112, 124, 124, 127, 111, 127, 130, 124, 137, 115, 130, 131, 135, 124, 126, 131, 129, 139, 107, 118, 126, 137, 117, 121, 133, 117, 133, 115, 131, 140, 136, 125, 118, 131, 121, 138, 119, 120, 126, 130, 118, 112, 135, 121, 132, 125, 124, 138, 130, 126, 119, 134, 130, 133, 124, 114, 122, 125, 127, 114, 137, 126, 123, 126, 118, 142, 132, 132, 120, 132, 128, 122, 127, 122, 125, 122, 128, 115, 128, 125, 122, 131, 122, 139, 134, 131, 116, 124, 138, 126, 129, 121, 128, 114, 123, 118, 133, 130, 117, 131, 126, 131, 126, 138, 126, 125, 132, 131, 125, 115, 127, 120, 130, 115, 130, 132, 116, 120, 128, 143, 126, 134, 128, 126, 122, 126, 134, 123, 127, 112, 130, 119, 119, 130, 127, 129, 119, 138, 130, 126, 127, 128, 132, 127, 128, 123, 128, 111, 118, 129, 130, 124, 123, 127, 123, 127, 134, 136, 132, 126, 124, 129, 127, 120, 130, 126, 116, 121, 129, 125, 119, 125, 129, 135, 128, 146, 138, 110, 62, 85, 195, 148, 149, 100, 113, 161, 175, 105, 110, 149, 80, 131, 117, 170, 137, 137, 113, 51, 112, 137, 187, 124, 72, 77, 100, 80, 171, 192, 148, 156, 34, 158, 172, 116, 144, 85, 195, 161, 75, 107, 20, 113, 154, 122, 229, 106, 120, 129, 75, 101, 101, 173, 171, 146, 128, 105, 126, 124, 31, 142, 152, 113, 179, 117, 148, 81, 87, 80, 141, 172, 109, 185, 130, 125, 98, 125, 105, 103, 152, 129, 156, 156, 102, 104, 141, 98, 143, 117, 113, 173, 128, 134, 71, 115, 133, 81, 159, 89, 116, 149, 90, 171, 105, 125, 149, 123, 150, 100, 135, 165, 127, 127, 142, 81, 128, 106, 124, 152, 93, 144, 110, 172, 127, 74, 121, 120, 147, 154, 119, 85, 156, 104, 113, 105, 110, 156, 134, 157, 66, 147, 158, 92, 166, 124, 100, 154, 128, 110, 153, 94, 118, 130, 126, 116, 104, 170, 81, 154, 164, 88, 139, 98, 140, 147, 118, 108, 104, 174, 112, 81, 141, 96, 140, 175, 81, 137, 138, 120, 146, 111, 134, 111, 158, 131, 81, 150, 96, 118, 155, 106, 130, 137, 113, 110, 158, 137, 115, 130, 120, 153, 139, 90, 92, 132, 160, 117, 98, 124, 114, 160, 124, 72, 152, 128, 179, 119, 111, 114, 122, 162, 81, 132, 120, 139, 133, 121, 75, 153, 107, 125, 185, 76, 204, 60, 130, 152, 91, 174, 65, 166, 127, 128, 97, 79, 142, 154, 138, 120, 116, 109, 195, 70, 132, 114, 143, 188, 78, 135, 65, 151, 119, 108, 143, 125, 148, 113, 119, 96, 162, 118, 136, 142, 135, 131, 90, 120, 104, 156, 120, 115, 120, 131, 135, 110, 114, 104, 179, 152, 110, 118, 113, 142, 125, 110, 123, 129, 134, 106, 128, 120, 111, 141, 117, 143, 138, 128, 121, 123, 141, 125, 113, 120, 118, 153, 134, 70, 126, 116, 142, 160, 84, 123, 148, 152, 129, 94, 125, 126, 160, 129, 89, 142, 105, 121, 141, 89, 125, 142, 142, 140, 113, 115, 113, 141, 163, 106, 134, 117, 109, 161, 93, 86, 129, 147, 145, 147, 81, 96, 157, 149, 132, 104, 149, 131, 143, 114, 73, 141, 131, 128, 139, 117, 89, 151, 124, 123, 126, 117, 162, 132, 156, 86, 102, 145, 112, 163, 112, 96, 133, 130, 112, 122, 113, 131, 155, 146, 118, 98, 152, 121, 133, 127, 99, 159, 121, 105, 118, 116, 111, 136, 144, 124, 132, 123, 130, 137, 120, 115, 133, 147, 129, 121, 115, 98, 121, 134, 112, 142, 135, 123, 138, 108, 112, 139, 138, 148, 117, 132, 123, 118, 116, 81, 140, 147, 129, 128, 112, 115, 129, 123, 120, 154, 144, 147, 104, 114, 110, 118, 144, 106, 147, 128, 103, 121, 117, 111, 138, 135, 143, 156, 117, 125, 91, 128, 137, 136, 150, 90, 131, 122, 99, 110, 116, 155, 158, 126, 117, 109, 134, 139, 106, 145, 130, 137, 145, 81, 104, 113, 120, 152, 126, 140, 116, 116, 136, 101, 154, 126, 136, 154, 116, 118, 102, 111, 119, 139, 129, 128, 120, 130, 115, 111, 133, 119, 179, 134, 122, 113, 115, 129, 116, 133, 110, 147, 116, 119, 110, 110, 135, 123, 162, 117, 144, 133, 109, 127, 119, 126, 140, 135, 111, 133, 86, 120, 122, 129, 154, 105, 158, 112, 133, 131, 100, 153, 128, 144, 127, 105, 120, 112, 109, 131, 111, 152, 137, 104, 144, 94, 148, 136, 123, 157, 117, 128, 121, 113, 121, 112, 120, 142, 117, 130, 111, 116, 143, 112, 152, 137, 129, 131, 122, 123, 117, 124, 130, 131, 115, 111, 113, 130, 118, 127, 142, 126, 140, 127, 132, 122, 126, 124, 135, 139, 113, 117, 107, 123, 119, 126, 123, 128, 145, 122, 127, 118, 135, 138, 135, 128, 118, 131, 120, 115, 106, 119, 126, 124, 120, 122, 135, 135, 122, 126, 137, 135, 131, 121, 123, 134, 130, 107, 110, 119, 138, 124, 105, 124, 135, 150, 116, 115, 136, 144, 139, 108, 125, 131, 135, 116, 109, 111, 126, 120, 121, 138, 124, 133, 122, 134, 132, 123, 137, 127, 138, 124, 119, 117, 112, 107, 134, 130, 116, 126, 129, 140, 110, 119, 136, 152, 140, 119, 122, 120, 122, 114, 127, 115, 124, 127, 122, 122, 111, 135, 124, 146, 141, 133, 126, 113, 132, 125, 125, 117, 131, 129, 107, 109, 114, 130, 130, 141, 135, 128, 128, 126, 136, 120, 130, 127, 141, 128, 99, 119, 108, 116, 125, 136, 136, 130, 120, 121, 140, 131, 123, 133, 149, 124, 118, 118, 104, 127, 118, 119, 124, 132, 125, 132, 126, 114, 135, 147, 134, 127, 139, 115, 117, 132, 110, 121, 117, 117, 132, 125, 120, 121, 139, 125, 126, 154, 130, 121, 133, 127, 117, 126, 115, 124, 130, 106, 119, 123, 127, 121, 142, 137, 118, 142, 133, 128, 128, 120, 125, 136, 127, 107, 116, 114, 117, 126, 130, 130, 132, 136, 123, 131, 137, 127, 131, 139, 117, 129, 125, 102, 121, 115, 124, 127, 123, 132, 128, 132, 126, 124, 149, 106, 148, 99, 84, 156, 83, 190, 123, 131, 120, 133, 171, 101, 159, 78, 75, 164, 216, 94, 149, 94, 69, 142, 61, 206, 126, 94, 80, 15, 153, 158, 214, 116, 113, 135, 151, 151, 77, 155, 155, 173, 99, 75, 112, 81, 104, 80, 147, 187, 187, 116, 88, 107, 83, 173, 128, 146, 147, 135, 119, 133, 123, 23, 130, 97, 168, 175, 121, 146, 74, 161, 50, 112, 133, 128, 242, 163, 67, 70, 129, 111, 166, 49, 132, 182, 194, 157, 6, 165, 72, 197, 136, 68, 199, 113, 162, 73, 70, 102, 106, 160, 160, 63, 135, 108, 101, 226, 74, 149, 135, 130, 183, 87, 129, 85, 180, 176, 59, 113, 92, 124, 182, 91, 88, 158, 169, 170, 91, 63, 114, 137, 179, 102, 108, 156, 81, 125, 92, 86, 138, 173, 144, 140, 148, 79, 142, 112, 155, 123, 137, 137, 101, 181, 39, 98, 121, 137, 173, 123, 114, 103, 164, 121, 127, 100, 165, 125, 146, 118, 41, 172, 76, 152, 132, 108, 142, 103, 158, 68, 164, 146, 129, 174, 106, 114, 123, 94, 105, 169, 115, 124, 98, 134, 128, 104, 144, 82, 202, 156, 105, 148, 84, 138, 116, 135, 122, 109, 142, 89, 125, 123, 78, 163, 156, 119, 137, 114, 144, 133, 126, 129, 110, 166, 95, 112, 143, 56, 140, 143, 119, 158, 101, 121, 144, 139, 129, 111, 169, 122, 116, 129, 86, 138, 111, 108, 136, 122, 124, 114, 142, 131, 111, 140, 152, 146, 127, 97, 121, 144, 120, 108, 108, 141, 109, 116, 119, 113, 151, 130, 145, 130, 122, 139, 125, 148, 101, 109, 156, 123, 112, 89, 107, 142, 126, 136, 112, 139, 157, 93, 154, 133, 102, 168, 107, 144, 122, 77, 133, 101, 156, 96, 104, 181, 100, 146, 118, 90, 183, 140, 134, 146, 87, 130, 126, 111, 132, 68, 166, 134, 100, 145, 62, 167, 149, 121, 150, 122, 162, 112, 110, 119, 104, 146, 139, 100, 141, 88, 91, 162, 110, 149, 127, 136, 166, 114, 121, 106, 136, 151, 117, 122, 119, 105, 120, 107, 103, 142, 137, 157, 124, 107, 137, 126, 148, 137, 113, 145, 139, 99, 108, 100, 116, 141, 115, 137, 124, 139, 113, 111, 171, 116, 136, 158, 124, 137, 105, 83, 126, 151, 115, 103, 122, 136, 124, 134, 94, 115, 199, 142, 130, 117, 103, 143, 143, 112, 74, 152, 145, 109, 113, 72, 141, 169, 127, 105, 147, 164, 126, 122, 122, 109, 148, 133, 91, 165, 102, 73, 138, 105, 162, 127, 111, 137, 147, 159, 86, 108, 169, 120, 177, 91, 67, 152, 110, 135, 91, 93, 165, 160, 135, 75, 113, 182, 148, 119, 125, 120, 171, 110, 68, 127, 113, 143, 114, 111, 146, 114, 120, 119, 140, 159, 125, 139, 139, 124, 128, 98, 112, 133, 114, 139, 117, 86, 137, 130, 122, 127, 123, 171, 153, 120, 106, 119, 158, 107, 107, 133, 114, 140, 106, 82, 134, 132, 136, 131, 136, 149, 131, 139, 104, 121, 157, 119, 128, 123, 92, 123, 118, 108, 118, 142, 137, 131, 148, 110, 125, 150, 124, 138, 148, 109, 125, 116, 96, 118, 111, 135, 115, 162, 110, 106, 148, 124, 152, 130, 137, 126, 156, 106, 109, 112, 99, 135, 129, 137, 85, 145, 114, 128, 138, 125, 151, 138, 156, 103, 140, 91, 134, 134, 111, 114, 102, 154, 96, 131, 104, 128, 156, 139, 143, 128, 132, 118, 146, 105, 135, 115, 122, 123, 97, 132, 97, 140, 120, 136, 150, 121, 136, 128, 137, 139, 125, 116, 147, 113, 116, 92, 109, 143, 110, 146, 101, 135, 140, 117, 155, 117, 138, 152, 131, 123, 116, 114, 121, 107, 121, 123, 119, 139, 97, 133, 133, 122, 162, 124, 140, 143, 121, 120, 116, 137, 122, 105, 117, 116, 134, 118, 94, 136, 127, 145, 146, 125, 137, 128, 137, 122, 125, 117, 131, 118, 104, 111, 110, 143, 110, 132, 122, 138, 146, 126, 132, 123, 157, 112, 129, 124, 117, 124, 95, 125, 112, 142, 100, 131, 129, 124, 149, 123, 150, 115, 154, 117, 125, 126, 116, 134, 95, 123, 99, 153, 102, 118, 133, 119, 164, 115, 144, 111, 160, 123, 126, 127, 113, 138, 96, 124, 94, 143, 112, 129, 131, 116, 143, 124, 154, 109, 154, 128, 129, 133, 113, 125, 100, 119, 109, 145, 116, 112, 123, 132, 133, 127, 138, 128, 158, 137, 118, 114, 118, 131, 114, 115, 112, 124, 139, 104, 111, 129, 126, 151, 147, 128, 131, 135, 123, 125, 124, 124, 119, 121, 118, 108, 124, 100, 127, 138, 139, 136, 130, 134, 124, 143, 126, 120, 136, 136, 116, 105, 99, 110, 143, 118, 123, 128, 131, 133, 128, 131, 123, 149, 143, 129, 128, 115, 106, 112, 123, 117, 129, 124, 113, 135, 119, 120, 135, 145, 141, 143, 137, 109, 125, 121, 120, 122, 113, 121, 129, 126, 99, 117, 134, 136, 144, 137, 132, 131, 138, 116, 129, 129, 116, 125, 123, 116, 104, 118, 120, 128, 141, 117, 136, 148, 120, 137, 124, 154, 145, 63, 85, 68, 199, 112, 132, 140, 138, 159, 93, 151, 84, 214, 154, 55, 96, 194, 175, 65, 113, 51, 159, 127, 107, 147, 107, 104, 0, 164, 192, 165, 223, 51, 128, 103, 137, 132, 143, 147, 88, 211, 20, 118, 75, 135, 97, 156, 249, 79, 216, 0, 133, 103, 96, 148, 124, 216, 4, 222, 74, 142, 96, 103, 175, 101, 232, 14, 239, 33, 90, 109, 66, 155, 108, 255, 54, 167, 96, 149, 140, 97, 129, 133, 202, 26, 194, 104, 106, 104, 105, 146, 120, 168, 96, 151, 137, 120, 100, 118, 64, 157, 131, 65, 128, 154, 178, 79, 118, 110, 180, 135, 110, 143, 165, 155, 69, 131, 49, 151, 165, 110, 140, 85, 190, 90, 134, 86, 151, 159, 78, 124, 119, 156, 66, 124, 119, 163, 138, 89, 146, 106, 170, 115, 129, 125, 111, 168, 74, 105, 105, 175, 173, 90, 124, 120, 155, 114, 106, 139, 143, 153, 97, 103, 90, 126, 138, 124, 134, 120, 182, 88, 122, 123, 139, 168, 74, 142, 101, 146, 108, 82, 163, 114, 170, 109, 115, 120, 157, 132, 117, 126, 124, 161, 75, 102, 101, 174, 129, 107, 127, 133, 165, 106, 108, 122, 162, 125, 119, 94, 114, 140, 111, 117, 109, 168, 118, 141, 101, 144, 153, 118, 108, 103, 172, 104, 126, 86, 133, 155, 109, 124, 112, 178, 111, 141, 107, 122, 152, 108, 119, 95, 153, 115, 129, 111, 102, 179, 123, 127, 118, 148, 123, 107, 123, 106, 157, 104, 119, 127, 124, 123, 119, 158, 112, 153, 132, 113, 133, 95, 133, 109, 144, 103, 142, 116, 100, 156, 115, 159, 120, 150, 115, 129, 108, 109, 141, 112, 129, 115, 133, 97, 142, 127, 133, 168, 104, 145, 119, 121, 111, 117, 126, 127, 143, 109, 84, 137, 145, 128, 159, 103, 146, 152, 94, 106, 125, 138, 127, 125, 113, 100, 138, 131, 106, 163, 135, 140, 145, 89, 105, 144, 128, 106, 141, 138, 104, 101, 129, 117, 175, 131, 107, 170, 113, 105, 109, 128, 114, 150, 148, 76, 129, 116, 133, 140, 135, 131, 152, 152, 56, 136, 121, 127, 123, 134, 118, 112, 141, 88, 160, 132, 148, 144, 123, 114, 93, 167, 83, 135, 132, 114, 124, 101, 147, 109, 168, 115, 156, 136, 98, 128, 123, 141, 83, 149, 119, 113, 112, 113, 156, 127, 149, 123, 153, 112, 106, 140, 129, 122, 112, 128, 110, 108, 124, 140, 132, 141, 132, 150, 111, 108, 130, 148, 130, 98, 127, 117, 123, 97, 140, 136, 149, 147, 98, 138, 100, 157, 127, 116, 131, 95, 159, 74, 122, 132, 144, 147, 120, 143, 118, 126, 114, 133, 142, 118, 114, 108, 123, 109, 123, 141, 125, 169, 120, 143, 90, 128, 151, 112, 149, 63, 166, 98, 124, 98, 127, 177, 100, 179, 80, 175, 95, 148, 113, 116, 150, 63, 179, 55, 163, 94, 157, 119, 132, 173, 80, 180, 77, 177, 104, 128, 87, 114, 164, 71, 159, 81, 173, 119, 150, 109, 135, 162, 106, 146, 89, 133, 100, 151, 85, 129, 143, 119, 138, 111, 141, 134, 161, 106, 130, 134, 109, 101, 122, 119, 138, 136, 103, 132, 129, 146, 118, 143, 123, 145, 134, 96, 92, 131, 141, 109, 136, 106, 161, 127, 117, 112, 149, 155, 118, 134, 86, 133, 113, 123, 101, 136, 148, 129, 127, 98, 160, 135, 144, 99, 144, 137, 99, 104, 95, 151, 124, 135, 106, 144, 138, 129, 134, 114, 161, 125, 135, 86, 105, 133, 120, 117, 108, 150, 139, 126, 107, 140, 156, 144, 117, 109, 138, 107, 118, 102, 114, 148, 128, 127, 111, 137, 146, 130, 137, 123, 141, 130, 87, 111, 131, 129, 118, 123, 124, 137, 132, 120, 134, 148, 140, 112, 132, 103, 116, 135, 95, 132, 126, 151, 102, 130, 138, 122, 173, 86, 148, 117, 140, 76, 118, 147, 99, 155, 83, 164, 122, 149, 103, 144, 158, 84, 165, 74, 140, 100, 140, 102, 109, 165, 93, 172, 94, 156, 133, 153, 94, 121, 160, 66, 148, 82, 148, 104, 138, 114, 118, 177, 100, 167, 108, 137, 121, 147, 93, 98, 151, 99, 130, 92, 145, 127, 146, 117, 132, 165, 113, 126, 118, 131, 107, 132, 104, 117, 127, 121, 125, 125, 143, 136, 148, 110, 125, 135, 131, 106, 115, 126, 114, 134, 103, 132, 130, 141, 139, 126, 132, 120, 138, 115, 114, 119, 127, 123, 111, 119, 129, 136, 131, 136, 146, 119, 135, 116, 124, 123, 105, 133, 107, 129, 107, 137, 128, 121, 154, 135, 147, 107, 135, 116, 131, 111, 101, 142, 102, 133, 102, 140, 119, 149, 153, 118, 142, 112, 152, 105, 126, 98, 133, 129, 87, 138, 112, 145, 119, 150, 135, 131, 141, 114, 138, 111, 129, 110, 127, 107, 116, 140, 103, 140, 135, 149, 124, 121, 134, 128, 135, 104, 123, 125, 121, 114, 121, 125, 128, 148, 126, 130, 125, 130, 134, 116, 120, 118, 130, 118, 106, 130, 131, 134, 134, 133, 134, 128, 122, 126, 130, 120, 117, 114, 122, 121, 115, 133, 123, 145, 144, 124, 131, 118, 136, 129, 115, 120, 106, 137, 99, 111, 133, 130, 146, 129, 139, 126, 142, 115, 133, 129, 121, 116, 101, 131, 91, 148, 109, 134, 147, 125, 148, 107, 148, 106, 158, 110, 121, 121, 114, 121, 98, 148, 105, 169, 111, 132, 133, 121, 143, 111, 148, 94, 142, 116, 119, 116, 116, 139, 132, 147, 101, 147, 121, 127, 127, 121, 127, 120, 129, 109, 120, 125, 134, 137, 139, 114, 137, 126, 121, 127, 128, 122, 113, 125, 113, 133, 113, 134, 124, 156, 123, 122, 135, 109, 154, 108, 131, 100, 135, 120, 114, 122, 115, 157, 128, 141, 101, 149, 128, 131, 122, 108, 135, 117, 129, 98, 131, 125, 132, 138, 124, 135, 128, 134, 112, 138, 123, 124, 115, 116, 129, 121, 128, 114, 142, 140, 126, 122, 125, 129, 136, 123, 109, 120, 131, 128, 118, 117, 130, 141, 140, 115, 124, 135, 126, 129, 113, 126, 122, 128, 112, 118, 137, 132, 138, 119, 138, 128, 136, 111, 121, 141, 116, 126, 95, 135, 124, 133, 122, 125, 149, 130, 136, 110, 131, 129, 136, 113, 108, 124, 121, 125, 112, 132, 140, 144, 122, 123, 134, 131, 130, 119, 127, 123, 119, 108, 117, 129, 136, 127, 132, 126, 142, 127, 117, 123, 132, 143, 113, 115, 105, 133, 123, 124, 129, 134, 146, 115, 131, 119, 135, 129, 123, 122, 115, 131, 108, 122, 125, 136, 134, 131, 126, 134, 138, 109, 121, 129, 133, 116, 112, 120, 126, 135, 122, 127, 140, 138, 126, 132, 120, 127, 128, 117, 110, 124, 126, 120, 123, 126, 139, 132, 134, 121, 142, 133, 118, 121
};

void setup()
{
  pinMode(10,OUTPUT);
  digitalWrite(10,0); //將腳位10設為GND
}

void loop()
{
  if(Isstop()==true){
    startPlayback(BGM, sizeof(BGM));
  }
}

