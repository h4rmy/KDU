/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2022
*
*  TITLE:       LDR.H
*
*  VERSION:     1.13
*
*  DATE:        05 Feb 2022
*
*  Common header file for PE loader unit.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#pragma once

LPVOID PELoaderLoadImage(
    _In_ LPVOID Buffer,
    _Out_opt_ PDWORD SizeOfImage);

LPVOID PELoaderGetProcAddress(
    _In_ LPVOID ImageBase,
    _In_ PCHAR RoutineName);
