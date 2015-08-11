//
// Copyright (c) 1997 Molecular Structure Corporation
//
// RESTRICTED RIGHTS NOTICE SHORT FORM (JUNE 1987)
//
// Use, reproduction, or disclosure is subject to restrictions set
// forth in Contract No. W-31-109-ENG-38 and Contract No. 
// 943072401 with the University of Chicago, Operator of
// Argonne National Laboratory.
//
// CUIreflnfileSelect.cc    Initial author: YY Xiao          10-May-1997
//    This file is the implementation of interface class CUIreflnfileSelect.
// Description:
//
//  This file contains the reflnfileSelect class that implements the
//  selection of a reflection file and loading the file to a user 
//  selected reflection object.
//
/*
 *
 * Copyright (C) 2014 Rigaku Americas Corporation
 *                    9009 New Trails Drive
 *                    The Woodlands, TX, USA  77381
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *    * Redistributions of source code must retain the above copyright
 *      notice(s), this list of conditions and the following disclaimer.
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice(s), this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *    * Neither the name of the Rigaku Americas Corporation nor the 
 *      names of its contributors may be used to endorse or promote products
 *      derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL RIGAKU AMERICAS CORPORATION BE LIABLE 
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS INTERUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
*/ 

//
// README: Portions of this file are merged at file generation
// time. Edits can be made *only* in between specified code blocks, look
// for keywords <Begin user code> and <End user code>.
//
/////////////////////////////////////////////////////////////
//
// Source file for CUIreflnfileSelect
//
//    This file generated by Builder Xcessory 3.5.1.
//
//    This class is a user interface "component", as described
//    in "Object-Oriented Programming with C++ and OSF/Motif",
//    by Douglas Young, Prentice Hall, 1992. ISBN 0-13-630252-1
//
/////////////////////////////////////////////////////////////
#include <X11/StringDefs.h>
#include <Xm/FileSB.h>
#include <Xm/Form.h>
#include <Xm/Label.h>
#include "CUIreflnfileSelect.h"
#include "CUIom9.h"

//
// Convenience functions from utilities file.
//
extern void RegisterBxConverters(XtAppContext);
extern XtPointer BX_CONVERT(Widget, char *, char *, int, Boolean *);
extern XtPointer DOUBLE(double);
extern XtPointer SINGLE(float);
extern void MENU_POST(Widget, XtPointer, XEvent *, Boolean *);
extern Pixmap XPM_PIXMAP(Widget, char**);
extern void SET_BACKGROUND_COLOR(Widget, ArgList, Cardinal*, Pixel);


// Begin user code block <head> 
#include <Xm/List.h>
// End user code block <head> 

//
// This table is used to define class resources that are placed
// in app-defaults. This table is necessary so each instance
// of this class has the proper default resource values set.
// This eliminates the need for each instance to have
// its own app-defaults values. This table must be NULL terminated.
//
#if defined(cxx_bx_compat)

Boolean CUIreflnfileSelect::_initAppDefaults = True;
UIAppDefault  CUIreflnfileSelect::_appDefaults[] = {
    {"", NULL, "dialogTitle", NULL},
    {"", NULL, "selectionLabelString", NULL},
    {"", NULL, "fileListLabelString", NULL},
    {"", NULL, "okLabelString", NULL},
    {"", NULL, "applyLabelString", NULL},
    {"", NULL, "cancelLabelString", NULL},
    {"", NULL, "helpLabelString", NULL},
    {"", NULL, "pattern", NULL},
    {"", NULL, "dirListLabelString", NULL},
    {"", NULL, "filterLabelString", NULL},
    {"lbFilterList", NULL, "labelString", NULL},
    {"cUIom9FilterList", "om9", "labelString", NULL},
    {"cUIom9FilterList", "pb8", "background", NULL},
    {"cUIom9FilterList", "pb8", "labelString", NULL},
    {"cUIom9FilterList", "pb7", "sensitive", NULL},
    {"cUIom9FilterList", "pb7", "background", NULL},
    {"cUIom9FilterList", "pb7", "labelString", NULL},
    {"cUIom9FilterList", "pb6", "background", NULL},
    {"cUIom9FilterList", "pb6", "labelString", NULL},
    {"cUIom9FilterList", "pb5", "background", NULL},
    {"cUIom9FilterList", "pb5", "labelString", NULL},
    {"cUIom9FilterList", "pb4", "background", NULL},
    {"cUIom9FilterList", "pb4", "labelString", NULL},
    {"cUIom9FilterList", "pb3", "background", NULL},
    {"cUIom9FilterList", "pb3", "labelString", NULL},
    {"cUIom9FilterList", "pb2", "background", NULL},
    {"cUIom9FilterList", "pb2", "labelString", NULL},
    {"cUIom9FilterList", "pb1", "background", NULL},
    {"cUIom9FilterList", "pb1", "labelString", NULL},
    {"cUIom9FilterList", "pb0", "background", NULL},
    {"cUIom9FilterList", "pb0", "labelString", NULL},
    {"cUIom9FilenameList", "pb8", "background", NULL},
    {"cUIom9FilenameList", "pb8", "labelString", NULL},
    {"cUIom9FilenameList", "pb7", "background", NULL},
    {"cUIom9FilenameList", "pb7", "labelString", NULL},
    {"cUIom9FilenameList", "pb6", "background", NULL},
    {"cUIom9FilenameList", "pb6", "labelString", NULL},
    {"cUIom9FilenameList", "pb5", "background", NULL},
    {"cUIom9FilenameList", "pb5", "labelString", NULL},
    {"cUIom9FilenameList", "pb4", "background", NULL},
    {"cUIom9FilenameList", "pb4", "labelString", NULL},
    {"cUIom9FilenameList", "pb3", "background", NULL},
    {"cUIom9FilenameList", "pb3", "labelString", NULL},
    {"cUIom9FilenameList", "pb2", "background", NULL},
    {"cUIom9FilenameList", "pb2", "labelString", NULL},
    {"cUIom9FilenameList", "pb1", "background", NULL},
    {"cUIom9FilenameList", "pb1", "labelString", NULL},
    {"cUIom9FilenameList", "pb0", "background", NULL},
    {"cUIom9FilenameList", "pb0", "labelString", NULL},
    {"lbFilenameList", NULL, "labelString", NULL},
    {NULL, NULL, NULL, NULL}
};
#endif

// These are default resources for widgets in objects of this class
// All resources will be prepended by *<name> at instantiation,
// where <name> is the name of the specific instance, as well as the
// name of the baseWidget. These are only defaults, and may be overriden
// in a resource file by providing a more specific resource name

String  CUIreflnfileSelect::_defaultCUIreflnfileSelectResources[] = {
        NULL
};

//
// Old style constructor, for compatibility only.
//
CUIreflnfileSelect::CUIreflnfileSelect(const char *name, Widget parent) : 
    UIComponent(name)
{
    
    // Begin user code block <alt_constructor> 
    // End user code block <alt_constructor> 
    create(parent);
}

//
// Class constructor.
//
CUIreflnfileSelect::CUIreflnfileSelect(const char *name) : UIComponent(name)
{
    
    // Begin user code block <constructor> 
  m_sFilename       = "";
  m_pObj            = NULL;
  m_prvFileCallback = NULL;
  m_nReadWriteMode  = 0;
    // End user code block <constructor> 
}

//
// Minimal Destructor. Base class destroys widgets.
//
CUIreflnfileSelect::~CUIreflnfileSelect() 
{
    
    // Begin user code block <destructor> 
    // End user code block <destructor> 
    delete _clientDataStructs;
}

//
// Handle creation of all widgets in the class.
//
void CUIreflnfileSelect::create(Widget parent) 
{
    Arg      args[256];
    Cardinal ac=0;
    Boolean  argok=False;
    
    //
    // Load any class-defaulted resources for this object.
    //
    setDefaultResources(parent, _defaultCUIreflnfileSelectResources);
    
#if defined(cxx_bx_compat)
    //
    // Setup app-defaults fallback table if not already done.
    //
    if (_initAppDefaults)
    {
        initAppDefaults(parent, "CUIreflnfileSelect", _appDefaults);
        _initAppDefaults = False;
    }
    //
    // Now set the app-defaults for this instance.
    //
    setAppDefaults(parent, _appDefaults, _name, False);
#endif
    
    //
    // Register the converters for the widgets.
    //
    RegisterBxConverters(XtWidgetToApplicationContext(parent)); 
    XtInitializeWidgetClass(xmFileSelectionBoxWidgetClass);
    XtInitializeWidgetClass(xmFormWidgetClass);
    XtInitializeWidgetClass(xmLabelWidgetClass);
    
    //
    // Create an unmanaged widget as the top of the hierarchy.
    //
    
    ac = 0;
    XtSetArg(args[ac], XmNx, 716); ac++;
    XtSetArg(args[ac], XmNy, 103); ac++;
    XtSetArg(args[ac], XmNwidth, 556); ac++;
    XtSetArg(args[ac], XmNheight, 424); ac++;
    _CUIreflnfileSelect = XmCreateFileSelectionBox(parent,
        _name,
        args, 
        ac);
    _clientDataStructs = new UICallbackStruct;
    _clientDataStructs->object = this;
    _clientDataStructs->client_data = (XtPointer)0;
    XtAddCallback(_CUIreflnfileSelect,
        XmNokCallback,
        CUIreflnfileSelect::vReflnFileSelectCBCallback,
        (XtPointer)_clientDataStructs);
    _clientDataStructs = new UICallbackStruct;
    _clientDataStructs->object = this;
    _clientDataStructs->client_data = (XtPointer)0;
    XtAddCallback(_CUIreflnfileSelect,
        XmNcancelCallback,
        CUIreflnfileSelect::vReflnFileSelectCBCallback,
        (XtPointer)_clientDataStructs);
    
    _w = _CUIreflnfileSelect;
    //
    // Install callback to guard against unexpected widget destruction..
    //
    installDestroyHandler();
    
    ac = 0;
    XtSetArg(args[ac], XmNresizePolicy, XmRESIZE_GROW); ac++;
    XtSetArg(args[ac], XmNx, 11); ac++;
    XtSetArg(args[ac], XmNy, 236); ac++;
    XtSetArg(args[ac], XmNwidth, 534); ac++;
    XtSetArg(args[ac], XmNheight, 40); ac++;
    _form = XmCreateForm(_CUIreflnfileSelect,
        "form",
        args, 
        ac);
    XtManageChild(_form);
    
    ac = 0;
    XtSetArg(args[ac], XmNtraversalOn, False); ac++;
    XtSetArg(args[ac], XmNalignment, XmALIGNMENT_BEGINNING); ac++;
    XtSetArg(args[ac], XmNx, 270); ac++;
    XtSetArg(args[ac], XmNy, 0); ac++;
    XtSetArg(args[ac], XmNwidth, 130); ac++;
    XtSetArg(args[ac], XmNheight, 40); ac++;
    _lbFilterList = XmCreateLabel(_form,
        "lbFilterList",
        args, 
        ac);
    XtManageChild(_lbFilterList);
    
    #if defined(cxx_bx_compat)
    setAppDefaults(_form, _appDefaults, "cUIom9FilterList", True);
    #endif
    _cUIom9FilterList = new CUIom9("cUIom9FilterList");
    _cUIom9FilterList->create(_form);
    _cUIom9FilterList->manage();
    ac = 0;
    XtSetArg(args[ac], XmNx, 397); ac++;
    XtSetArg(args[ac], XmNy, 0); ac++;
    XtSetArg(args[ac], XmNwidth, 135); ac++;
    XtSetArg(args[ac], XmNheight, 40); ac++;
    XtSetValues(_cUIom9FilterList->baseWidget(), args, ac);
    
    #if defined(cxx_bx_compat)
    setAppDefaults(_form, _appDefaults, "cUIom9FilenameList", True);
    #endif
    _cUIom9FilenameList = new CUIom9("cUIom9FilenameList");
    _cUIom9FilenameList->create(_form);
    _cUIom9FilenameList->manage();
    ac = 0;
    XtSetArg(args[ac], XmNx, 110); ac++;
    XtSetArg(args[ac], XmNy, 0); ac++;
    XtSetArg(args[ac], XmNwidth, 120); ac++;
    XtSetArg(args[ac], XmNheight, 40); ac++;
    XtSetValues(_cUIom9FilenameList->baseWidget(), args, ac);
    
    ac = 0;
    XtSetArg(args[ac], XmNtraversalOn, False); ac++;
    XtSetArg(args[ac], XmNalignment, XmALIGNMENT_BEGINNING); ac++;
    XtSetArg(args[ac], XmNx, 0); ac++;
    XtSetArg(args[ac], XmNy, 0); ac++;
    XtSetArg(args[ac], XmNwidth, 110); ac++;
    XtSetArg(args[ac], XmNheight, 40); ac++;
    _lbFilenameList = XmCreateLabel(_form,
        "lbFilenameList",
        args, 
        ac);
    XtManageChild(_lbFilenameList);
    
    ac = 0;
    XtSetArg(args[ac], XmNleftAttachment, XmATTACH_NONE); ac++;
    XtSetArg(args[ac], XmNrightAttachment, XmATTACH_WIDGET); ac++;
    XtSetArg(args[ac], XmNrightWidget, _cUIom9FilterList->baseWidget()); ac++;
    XtSetArg(args[ac], XmNtopOffset, 0); ac++;
    XtSetArg(args[ac], XmNrightOffset, -3); ac++;
    XtSetValues(_lbFilterList, args, ac);
    
    ac = 0;
    XtSetArg(args[ac], XmNleftAttachment, XmATTACH_NONE); ac++;
    XtSetArg(args[ac], XmNrightAttachment, XmATTACH_FORM); ac++;
    XtSetArg(args[ac], XmNtopOffset, 0); ac++;
    XtSetArg(args[ac], XmNrightOffset, 2); ac++;
    XtSetValues(_cUIom9FilterList->baseWidget(), args, ac);
    
    ac = 0;
    XtSetArg(args[ac], XmNleftAttachment, XmATTACH_WIDGET); ac++;
    XtSetArg(args[ac], XmNrightAttachment, XmATTACH_NONE); ac++;
    XtSetArg(args[ac], XmNleftWidget, _lbFilenameList); ac++;
    XtSetArg(args[ac], XmNtopOffset, 0); ac++;
    XtSetArg(args[ac], XmNleftOffset, 0); ac++;
    XtSetArg(args[ac], XmNrightOffset, 0); ac++;
    XtSetValues(_cUIom9FilenameList->baseWidget(), args, ac);
    
    ac = 0;
    XtSetArg(args[ac], XmNleftAttachment, XmATTACH_FORM); ac++;
    XtSetArg(args[ac], XmNtopOffset, 0); ac++;
    XtSetArg(args[ac], XmNleftOffset, 0); ac++;
    XtSetValues(_lbFilenameList, args, ac);
    
    // Begin user code block <endcreate> 
    _cUIom9FilenameList->m_prvCUIom9Callback = CUIreflnfileSelect::vCUIom9CBCallback;
    _cUIom9FilenameList->m_pObj = this;
    _cUIom9FilterList->m_prvCUIom9Callback = CUIreflnfileSelect::vCUIom9CBCallback;
    _cUIom9FilterList->m_pObj = this;

    _cUIom9FilterList->vScanUnmanage();

    // Unmanage some widgets that are not really used yet

    _cUIom9FilenameList->unmanage();
    XtUnmanageChild(_lbFilenameList);

    // End user code block <endcreate> 
}

//
// Classname access.
//
const char *const CUIreflnfileSelect::className()
{
    return ("CUIreflnfileSelect");
}

void CUIreflnfileSelect::vReflnFileSelectCBCallback(Widget w, 
		XtPointer clientData, XtPointer callData)
{
    UICallbackStruct *data = (UICallbackStruct *) clientData;
    CUIreflnfileSelect *obj = (CUIreflnfileSelect *)data->object;
    obj->vReflnFileSelectCB(w, data->client_data, callData);
}

void CUIreflnfileSelect::vReflnFileSelectCB (Widget w, XtPointer clientData, XtPointer callData)
{
    
    // Begin user code block <vReflnFileSelectCB> 

  XmFileSelectionBoxCallbackStruct *ptCBS
    = (XmFileSelectionBoxCallbackStruct *) callData;

  if (XmCR_CANCEL == ptCBS->reason)
    {
      XtUnmanageChild(w);
    }
  else if (XmCR_OK == ptCBS->reason)
  {
    // OK selected
    //    cout << "CUIreflnfileSelect: OK selected";
    if (NULL != m_prvFileCallback)
      {
	char *pcTemp;
	pcTemp = NULL;
	if (XmStringGetLtoR(ptCBS->value,
#if (XmVersion >= 1002)
			    XmFONTLIST_DEFAULT_TAG,
#else
			    XmSTRING_DEFAULT_CHARSET,
#endif
			    &pcTemp))
	  {
	    m_sFilename = pcTemp;
	    //	    cout << ", " << pcTemp << endl;
	  }
	if (NULL != pcTemp)
	  {
	    XtFree(pcTemp);
	  }
	//	cout << ", Callback started: ";
	m_prvFileCallback(m_pObj, m_sFilename, m_nReflnObjIndex);
      }
    //    cout << endl;
    XtUnmanageChild(w);
  }
    // End user code block <vReflnFileSelectCB> 
}

// Begin user code block <tail> 
void 
CUIreflnfileSelect::manage()
{
  // Force re-filtering before every manage operation, so list is updated
  
  XmFileSelectionDoSearch(_CUIreflnfileSelect, NULL);
  UIComponent::manage();
}

bool
CUIreflnfileSelect::bDoSearch(const Cstring& rsSearch)
{
  bool bReturnValue = False;
  XmString sxDirMask;
  sxDirMask = XmStringCreateLtoR(rsSearch.string(),
#if (XmVersion >= 1002)
								 XmFONTLIST_DEFAULT_TAG);
#else
  XmSTRING_DEFAULT_CHARSET);
#endif

  if (NULL != sxDirMask)
    {
      XmFileSelectionDoSearch(_CUIreflnfileSelect, sxDirMask);  
	  XmStringFree(sxDirMask);
	  XtVaGetValues(_CUIreflnfileSelect, XmNlistUpdated, &bReturnValue, NULL);
	}
  return (bReturnValue);
}

Widget
CUIreflnfileSelect::wGetListWidget(void)
{
  return (m_wListWidget);
}

void CUIreflnfileSelect::vCUIom9CBCallback(XtPointer pObj, Widget w, 
				           XtPointer clientData,
                                           XtPointer callData)
{
  CUIreflnfileSelect *obj = (CUIreflnfileSelect *)pObj;
  obj->vCUIom9CB(pObj, w, clientData, callData);
}

void CUIreflnfileSelect::vCUIom9CB(XtPointer pObj, Widget w, 
				   XtPointer clientData,
				   XtPointer callData)
{
  if (w == _cUIom9FilenameList->baseWidget())
    {
      const char *pcFilename;
      XmString sxFilename;

      pcFilename = _cUIom9FilenameList->pcGetLabel();

      sxFilename = XmStringCreate((char*)pcFilename, 
#if (XmVersion >= 1002)
				XmFONTLIST_DEFAULT_TAG);
#else
  XmSTRING_DEFAULT_CHARSET);
#endif

  //      cout << "Filename Changed to \"" << pcFilename << '\"' << endl;
      XtVaSetValues(_CUIreflnfileSelect, XmNpattern, sxFilename, NULL);  
      XmFileSelectionDoSearch(_CUIreflnfileSelect, NULL);
      XmStringFree(sxFilename);
    }
  else if (w == _cUIom9FilterList->baseWidget())
    {
      const char *pcFilter;
      XmString sxFilter;

      pcFilter = _cUIom9FilterList->pcGetLabel();
      sxFilter = XmStringCreate((char*)pcFilter, 
#if (XmVersion >= 1002)
				XmFONTLIST_DEFAULT_TAG);
#else
  XmSTRING_DEFAULT_CHARSET);
#endif

//      cout << "Filter Changed to \"" << pcFilter << '\"' << endl;
      XtVaSetValues(_CUIreflnfileSelect, XmNpattern, sxFilter, NULL);  
      XmFileSelectionDoSearch(_CUIreflnfileSelect, NULL);
      XmStringFree(sxFilter);
    }
}
void CUIreflnfileSelect::vSetReadWrite(const int nMode)
{
  Cstring sOKLabel;
  Cstring sTitle;
  if (0 == nMode)
    {
      // Read mode

      m_nReadWriteMode = 0;
      sTitle   = "Read a reflection list";
      sOKLabel = "OK, Read";
    }
  else
    {
      // Write mode
      m_nReadWriteMode = 1;
      sTitle   = "Write a reflection list";
      sOKLabel = "OK, Write";
    }

  // Set title
  Boolean  argok=False;  

  XtVaSetValues(_CUIreflnfileSelect,
		XmNdialogTitle,
		BX_CONVERT(_CUIreflnfileSelect,
			sTitle.string(),
			XmRXmString, 0, &argok), 
		NULL);

  // Set OK button label

  XtVaSetValues(_CUIreflnfileSelect,
		XmNokLabelString,
		BX_CONVERT(_CUIreflnfileSelect,
			sOKLabel.string(),
			XmRXmString, 0, &argok), 
		NULL);
}
int  CUIreflnfileSelect::nGetReadWrite(void)
{
  return (m_nReadWriteMode);
}    
// End user code block <tail> 