#pragma once

#ifndef __DLL_H__
#define __DLL_H__

#ifdef PXCHDLL_EXPORTS
#define PXCHDLL_API __declspec(dllexport)
#else
#define PXCHDLL_API __declspec(dllimport)
#endif

#endif