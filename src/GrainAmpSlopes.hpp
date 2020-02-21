#pragma once

double GRAIN_AMP_SLOPES[10][512] =
{
    // Classic
	/*
	 ................... NI ............................................................................
	..................,MMMMM............................................................................
	 ................ZMMMMMMM...........................................................................
	................MMMMMMMMMMN.........................................................................
	 ..............MMMMMMMMMMMMM........................................................................
	.............MMMMMMMMMMMMMMMMO .....................................................................
	 ...........MMMMMMMMMMMMMMMMMMM ....................................................................
	...........MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM? .....................
	 ........MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM ...................
	 ......DNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM .................
	 .... MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN, .............
	....ZMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM ...........
	 ..MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.........
	 =MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN......
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM ...
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
	*/
	{ 7, 9, 12, 15, 18, 21, 24, 26, 28, 31, 34, 36, 38, 40, 43, 45, 47, 49, 52, 54, 56, 58, 60, 62, 63, 65, 67, 69, 71, 74, 76, 78, 81, 83, 85, 87, 89, 91, 93, 96, 98, 99, 101, 103, 105, 106, 108, 110, 111, 113, 115, 117, 119, 121, 124, 126, 128, 131, 133, 135, 138, 140, 142, 145, 147, 149, 152, 154, 157, 159, 161, 163, 165, 168, 170, 172, 175, 177, 179, 181, 184, 186, 187, 190, 192, 194, 196, 199, 201, 204, 206, 208, 210, 212, 214, 216, 218, 219, 221, 223, 225, 226, 228, 230, 232, 234, 235, 237, 238, 240, 241, 243, 244, 244, 244, 243, 242, 240, 238, 236, 233, 231, 229, 227, 225, 223, 221, 219, 216, 214, 212, 209, 207, 205, 202, 200, 198, 196, 193, 191, 189, 186, 184, 182, 179, 177, 175, 173, 171, 169, 167, 165, 163, 161, 159, 157, 154, 152, 150, 148, 145, 143, 141, 140, 138, 137, 135, 134, 133, 133, 132, 132, 131, 131, 131, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 131, 130, 130, 129, 128, 127, 126, 125, 123, 122, 121, 119, 118, 117, 115, 114, 113, 111, 110, 109, 107, 106, 105, 103, 102, 101, 99, 98, 97, 95, 94, 93, 91, 90, 89, 87, 86, 85, 84, 83, 82, 80, 79, 78, 77, 76, 75, 75, 73, 72, 72, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 55, 54, 53, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 29, 28, 27, 26, 24, 23, 22, 21, 19, 18, 17, 16, 14, 13, 12, 10, 9, 8, 7, 6, 6, 5, 4, 4, 3, 2, 3, 0 },

    // flat top
    { 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 10, 11, 13, 15, 16, 18, 20, 23, 25, 28, 30, 33, 36, 39, 42, 45, 48, 51, 55, 58, 62, 65, 69, 73, 77, 81, 85, 89, 93, 97, 101, 106, 110, 114, 119, 124, 128, 133, 138, 142, 147, 152, 157, 161, 166, 170, 175, 179, 183, 187, 191, 195, 198, 202, 205, 208, 210, 213, 215, 217, 219, 221, 222, 224, 225, 226, 227, 228, 229, 230, 231, 231, 232, 232, 233, 233, 233, 233, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 235, 235, 235, 235, 235, 235, 235, 235, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 234, 234, 234, 234, 234, 234, 234, 234, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 233, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 236, 236, 236, 236, 236, 236, 236, 236, 236, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 237, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 236, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 235, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 234, 233, 233, 233, 232, 232, 232, 231, 231, 230, 230, 230, 229, 229, 229, 228, 228, 228, 227, 227, 227, 226, 226, 226, 225, 225, 224, 224, 223, 223, 222, 221, 221, 220, 219, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 207, 206, 205, 203, 202, 200, 198, 197, 195, 193, 191, 190, 188, 186, 185, 183, 181, 180, 178, 176, 175, 173, 171, 169, 168, 165, 163, 161, 158, 156, 153, 149, 146, 143, 139, 135, 131, 127, 123, 119, 115, 111, 107, 103, 100, 96, 92, 88, 85, 81, 78, 74, 70, 66, 62, 58, 54, 50, 46, 42, 38, 34, 30, 26, 22, 19, 16, 14, 11, 9, 7, 6, 5, 4, 3, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },


    // Dip in middle
{ 0, 0, 4, 5, 8, 10, 12, 15, 17, 20, 23, 25, 28, 31, 34, 38, 41, 44, 47, 51, 54, 58, 61, 65, 68, 72, 76, 79, 83, 87, 90, 94, 98, 101, 105, 109, 113, 116, 120, 124, 128, 132, 135, 139, 143, 147, 151, 155, 158, 162, 166, 169, 173, 176, 180, 183, 186, 189, 192, 195, 198, 201, 203, 206, 208, 210, 212, 214, 216, 218, 219, 220, 222, 223, 224, 224, 225, 226, 226, 227, 227, 227, 228, 228, 228, 228, 228, 228, 229, 229, 229, 229, 229, 229, 229, 229, 229, 229, 229, 229, 228, 228, 228, 228, 228, 228, 227, 227, 226, 226, 225, 225, 224, 223, 222, 221, 220, 218, 217, 215, 213, 211, 209, 207, 204, 202, 199, 196, 193, 190, 187, 183, 180, 176, 172, 169, 165, 160, 156, 152, 148, 144, 139, 135, 131, 127, 122, 118, 114, 110, 106, 102, 99, 95, 92, 89, 86, 83, 80, 77, 75, 73, 71, 69, 67, 65, 63, 62, 61, 60, 59, 58, 57, 57, 56, 56, 55, 55, 55, 55, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 54, 55, 55, 55, 55, 55, 55, 55, 56, 56, 56, 56, 57, 57, 58, 58, 59, 59, 60, 60, 61, 62, 63, 64, 65, 66, 67, 68, 70, 71, 72, 74, 76, 77, 79, 81, 82, 84, 86, 88, 90, 92, 95, 97, 99, 101, 104, 106, 109, 112, 115, 117, 120, 124, 127, 130, 134, 137, 141, 145, 148, 152, 156, 160, 164, 168, 172, 175, 178, 182, 184, 187, 189, 192, 194, 195, 197, 199, 200, 202, 203, 204, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 216, 217, 218, 218, 219, 220, 220, 220, 221, 221, 222, 222, 223, 223, 223, 224, 224, 224, 225, 225, 225, 226, 226, 226, 227, 227, 227, 228, 228, 228, 228, 228, 229, 229, 229, 229, 229, 230, 230, 230, 230, 230, 230, 231, 231, 231, 231, 231, 231, 231, 231, 232, 232, 232, 232, 232, 232, 233, 233, 233, 233, 233, 233, 233, 233, 233, 232, 232, 232, 232, 232, 231, 231, 231, 230, 230, 230, 229, 229, 229, 228, 228, 228, 227, 227, 226, 226, 226, 225, 225, 224, 224, 223, 223, 222, 221, 221, 220, 219, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 208, 206, 205, 204, 202, 201, 199, 198, 196, 194, 193, 191, 189, 188, 186, 184, 183, 181, 179, 177, 176, 174, 172, 170, 167, 165, 163, 161, 158, 155, 153, 150, 147, 143, 140, 137, 133, 130, 126, 123, 119, 115, 111, 108, 104, 100, 96, 92, 89, 85, 81, 77, 73, 69, 66, 62, 58, 54, 50, 47, 43, 39, 36, 33, 29, 26, 23, 21, 18, 16, 14, 12, 10, 8, 7, 6, 5, 4, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

// Medium

{
0, 0, 1, 1, 2, 3, 5, 6, 9, 11, 15, 18, 22, 26, 30, 35, 39, 44, 48, 53, 57, 62, 67, 71, 76, 80, 84, 89, 93, 97, 101, 105, 109, 113, 117, 120, 124, 128, 131, 135, 138, 142, 145, 149, 152, 156, 159, 163, 167, 171, 174, 178, 182, 187, 191, 195, 199, 203, 207, 211, 215, 218, 221, 222, 223, 223, 221, 219, 214, 209, 203, 195, 187, 179, 170, 162, 153, 145, 137, 129, 122, 115, 108, 102, 96, 90, 85, 81, 76, 72, 69, 65, 62, 59, 56, 54, 51, 49, 47, 45, 43, 42, 40, 39, 37, 36, 35, 34, 33, 32, 32, 31, 30, 29, 28, 28, 27, 26, 25, 25, 24, 23, 23, 22, 22, 21, 21, 21, 20, 20, 20, 20, 20, 19, 19, 19, 19, 18, 18, 18, 18, 17, 17, 17, 17, 16, 16, 16, 16, 15, 15, 15, 15, 14, 14, 14, 13, 13, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 4, 4, 4, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 16, 17, 19, 21, 23, 25, 27, 29, 32, 34, 36, 39, 41, 44, 47, 49, 52, 55, 58, 61, 64, 66, 69, 72, 75, 78, 80, 83, 86, 88, 91, 94, 97, 100, 102, 105, 108, 111, 113, 116, 119, 121, 123, 126, 129, 132, 135, 138, 141, 145, 148, 151, 154, 157, 160, 162, 165, 167, 169, 171, 173, 174, 176, 177, 178, 179, 180, 181, 182, 182, 183, 183, 183, 183, 183, 183, 183, 183, 183, 182, 182, 182, 181, 181, 180, 180, 179, 178, 176, 175, 174, 173, 171, 170, 169, 167, 165, 164, 161, 159, 156, 154, 151, 148, 145, 141, 138, 134, 130, 127, 123, 118, 114, 110, 106, 102, 98, 94, 90, 86, 83, 79, 76, 72, 69, 66, 63, 60, 57, 54, 51, 48, 45, 42, 39, 37, 34, 31, 28, 25, 22, 19, 17, 14, 12, 10, 8, 6, 5, 4, 3, 3, 2, 2, 2, 2, 3
},



	// ADSR 2
	/*
	M ..................................................................................................
	MM  ................................................................................................
	MMM.................................................................................................
	MMMM ...............................................................................................
	MMMM................................................................................................
	MMMMM ..............................................................................................
	MMMMMM .............................................................................................
	MMMMMMO.............................................................................................
	MMMMMMM.............................................................................................
	MMMMMMMM............................................................................................
	MMMMMMMMM  .........................................................................................
	MMMMMMMMMMM ........................................................................................
	MMMMMMMMMMMMMM  ....................................................................................
	MMMMMMMMMMMMMMMMM...................................................................................
	MMMMMMMMMMMMMMMMMMMMMMI  . .........................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM8888MMMMMMM8888888MM888888888 ~~~~~~~...,~~~==================
	*/
	{ 251, 249, 248, 246, 245, 243, 242, 240, 237, 235, 232, 229, 226, 223, 220, 216, 213, 209, 205, 201, 196, 192, 187, 183, 178, 173, 168, 163, 159, 154, 150, 145, 141, 137, 133, 129, 125, 121, 117, 113, 110, 106, 102, 99, 95, 92, 89, 86, 84, 81, 79, 77, 75, 74, 72, 71, 69, 68, 66, 65, 63, 62, 60, 59, 57, 56, 55, 54, 53, 52, 51, 50, 48, 47, 47, 46, 44, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 32, 31, 30, 29, 29, 28, 27, 27, 26, 26, 25, 24, 24, 23, 23, 22, 21, 21, 20, 20, 19, 19, 18, 18, 17, 17, 16, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 0.359375, 0.140625, 0.0625, 0.0625, 0.125, 0.34375, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0.359375, 0.140625, 0.046875, 0.015625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03125, 0.109375, 0.34375, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3 },



	// ADSR3 - fast decay
	/*
	....................................................................................................
	....................................................................................................
	8...................................................................................................
	M ..................................................................................................
	M...................................................................................................
	M ..................................................................................................
	M ..................................................................................................
	M$,.................................................................................................
	MM .................................................................................................
	MM .................................................................................................
	MM? ................................................................................................
	MMM.................................................................................................
	MMM: ...............................................................................................
	MMMM ...............................................................................................
	MMMMM ..............................................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
	*/
	{ 250, 247, 233, 222, 209, 195, 180, 166, 151, 137, 124, 113, 101, 92, 83, 75, 68, 61, 54, 48, 43, 38, 34, 31, 28, 25, 22, 20, 18, 17, 15, 14, 13, 12, 11, 11, 10, 10, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },



	// ADSR4 - snap, repeat
	/*
	....................................................................................................
	....................................................................................................
	....................................................................................................
	....................................................................................................
	 ...................................................................................................
	....................................................................................................
	 ...................................................................................................
	 ...........................M ......................................................................
	D..........................ZM ......................................................................
	M .........................MM? .....................................................................
	M.........................MMMM......................................................................
	M.........................MMMMM ....................................................................
	MM ......................MMMMMMM,...................................................................
	MMM.....................MMMMMMMMM...................................................................
	MMMMM.   ..............NMMMMMMMMMMM .............................................................. .
	MMMMMMMMMMMMM,...8NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
	*/
	{ 249, 251, 184, 154, 122, 98, 82, 75, 68, 62, 57, 53, 48, 45, 41, 38, 35, 31, 29, 27, 24, 22, 21, 19, 18, 17, 16, 15, 14, 13, 13, 13, 12, 12, 12, 12, 12, 11, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1, 1, 1, 0.4375, 0.25, 0.1875, 0.0625, 0, 0, 0, 0, 0, 0.0625, 0.125, 0.0625, 0.3125, 1, 0.3125, 0.375, 1, 1, 0.375, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 6, 8, 10, 12, 15, 17, 20, 23, 26, 29, 31, 33, 35, 38, 41, 44, 48, 53, 59, 64, 70, 75, 80, 85, 90, 95, 100, 105, 112, 118, 123, 129, 135, 136, 132, 129, 122, 112, 104, 96, 91, 86, 80, 77, 73, 68, 65, 62, 58, 55, 51, 48, 45, 42, 40, 37, 35, 32, 30, 28, 26, 24, 22, 20, 18, 16, 15, 13, 11, 10, 9, 7, 6, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },


	// Very short blip
	/*
	m...................................................................................................
	m...................................................................................................
	m...................................................................................................
	m...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	M...................................................................................................
	MMM. ...............................................................................................
	MMMMMMM8 ...........................................................................................
	*/
	{ 247, 251, 157, 110, 62, 42, 35, 33, 32, 29, 25, 23, 21, 20, 19, 17, 16, 14, 14, 13, 12, 10, 10, 9, 9, 8, 8, 7, 6, 5, 5, 5, 4, 4, 3, 3, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },





	// Descending parabolas
	/*
	7............. ............................................ ................. ......................
	MM............MMM .................................................. ...............................
	MM...........MMMM ..................................................................................
	MMM ........ MMMMD..................................................................................
	MMM.........MMMMMM..................................................................................
	MMM.........MMMMMM ............ ....................................................................
	MMM+........MMMMMM...........MMM....................................................................
	MMMM ......MMMMMMMM.........$MMMM ..................................................................
	MMMM ......MMMMMMMM.........MMMMM ..................................................................
	MMMM ......MMMMMMMM .......+MMMMMM...........M......................................................
	MMMM......MMMMMMMMM7 ......MMMMMMM. .......,MMM  ...................................................
	MMMMM.....MMMMMMMMMM......:MMMMMMMM .......MMMMM ...................................................
	MMMMM ...$MMMMMMMMMM. ....MMMMMMMMM8......MMMMMMM......DM. .........................................
	MMMMM....MMMMMMMMMMMM ...NMMMMMMMMMM ....MMMMMMMMM ...NMMM..........................................
	MMMMMM .MMMMMMMMMMMMMM  IMMMMMMMMMMMMN. MMMMMMMMMMN .MMMMMM. .. . ..................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM................ ..... ..... ...
	*/

	{ 237, 238, 239, 239, 240, 240, 239, 238, 237, 234, 231, 226, 221, 214, 206, 197, 186, 174, 162, 149, 135, 121, 106, 92, 79, 67, 56, 46, 37, 30, 23, 18, 15, 12, 10, 8, 8, 8, 8, 8, 10, 12, 14, 17, 21, 24, 28, 33, 38, 43, 49, 56, 62, 69, 77, 85, 93, 102, 112, 122, 132, 142, 152, 162, 172, 181, 190, 199, 206, 213, 219, 224, 229, 232, 235, 237, 239, 239, 240, 240, 239, 239, 237, 236, 233, 230, 226, 222, 216, 210, 202, 194, 185, 175, 164, 153, 142, 130, 119, 108, 97, 87, 77, 68, 60, 53, 47, 41, 36, 31, 27, 24, 21, 18, 16, 15, 13, 12, 12, 11, 11, 11, 11, 12, 13, 14, 16, 18, 20, 22, 25, 29, 33, 37, 42, 48, 54, 60, 67, 73, 80, 87, 94, 101, 107, 113, 119, 125, 130, 135, 140, 144, 148, 151, 153, 155, 156, 157, 158, 158, 158, 157, 156, 155, 153, 150, 147, 143, 139, 134, 129, 124, 118, 112, 106, 100, 93, 87, 80, 74, 68, 62, 56, 50, 45, 41, 37, 33, 30, 28, 25, 23, 22, 20, 19, 17, 16, 16, 15, 14, 14, 14, 14, 14, 14, 15, 15, 16, 17, 19, 21, 23, 26, 30, 34, 38, 43, 47, 52, 57, 62, 67, 71, 76, 80, 83, 87, 90, 92, 94, 96, 97, 98, 99, 99, 99, 99, 98, 96, 95, 93, 90, 87, 84, 80, 76, 72, 68, 63, 59, 54, 50, 45, 41, 37, 33, 30, 26, 23, 21, 18, 16, 15, 14, 13, 13, 13, 13, 13, 14, 15, 16, 18, 20, 22, 25, 27, 30, 33, 36, 39, 41, 44, 46, 47, 49, 50, 51, 51, 52, 51, 51, 50, 48, 47, 45, 42, 40, 37, 34, 31, 28, 25, 22, 20, 18, 16, 14, 13, 12, 11, 10, 10, 9, 9, 9, 10, 10, 11, 11, 12, 13, 14, 15, 16, 16, 17, 17, 17, 16, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 7, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },



	// Mountain Range
	/*
	 . 7 ...............................................................................................
	MMMMM...............................................................................................
	MMMMMM..............................................................................................
	MMMMMM,.............................................................................................
	MMMMMMM ............................................................................................
	MMMMMMMO ...........................................................................................
	MMMMMMMM ...........................................................................................
	MMMMMMMMM,..........................................................................................
	MMMMMMMMMM  ........................................................................................
	MMMMMMMMMMM.........................................................................................
	MMMMMMMMMMMM. ......................................................................................
	MMMMMMMMMMMMMM....DMM ..............................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMM.......................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM .....................................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMI....   ...........................................................
	MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMM..............................~~~~~~ ........
	*/
	{ 232, 234, 233, 233, 233, 233, 233, 233, 234, 234, 235, 235, 236, 237, 238, 239, 240, 240, 240, 240, 240, 239, 238, 236, 234, 232, 228, 225, 221, 216, 212, 207, 202, 197, 191, 186, 181, 176, 171, 166, 162, 157, 153, 149, 146, 142, 138, 135, 131, 127, 124, 120, 117, 114, 110, 107, 104, 101, 98, 95, 92, 90, 87, 85, 82, 80, 78, 75, 73, 71, 69, 67, 65, 63, 62, 61, 60, 59, 58, 58, 57, 57, 58, 58, 58, 58, 58, 58, 59, 59, 60, 61, 62, 63, 64, 65, 65, 66, 66, 66, 65, 65, 66, 67, 68, 69, 71, 71, 71, 70, 69, 67, 64, 61, 58, 56, 54, 52, 51, 50, 50, 50, 50, 50, 51, 51, 51, 52, 52, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 53, 52, 52, 51, 50, 49, 47, 46, 44, 42, 40, 38, 36, 34, 31, 29, 28, 26, 25, 23, 22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 16, 15, 15, 14, 13, 12, 11, 10, 8, 7, 7, 7, 7, 7, 8, 8, 9, 9, 9, 10, 11, 11, 12, 13, 13, 14, 13, 13, 13, 12, 12, 11, 11, 12, 12, 12, 12, 12, 11, 11, 10, 9, 8, 7, 6, 6, 6, 6, 7, 7, 8, 8, 9, 9, 8, 8, 7, 6, 5, 4, 3, 3, 4, 4, 5, 5, 5, 5, 5, 4, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 5, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }

};
