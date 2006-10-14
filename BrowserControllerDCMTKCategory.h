//
//  BrowserControllerDCMTKCategory.h
//  OsiriX
//
//  Created by Lance Pysher on 6/27/06.

/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://homepage.mac.com/rossetantoine/osirix/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

#import <Cocoa/Cocoa.h>
#import "browserController.h"



@interface BrowserController (BrowserControllerDCMTKCategory)

- (BOOL)compressDICOMWithJPEG:(NSString *)path;
- (BOOL)decompressDICOM:(NSString *)path to:(NSString*) dest;
- (BOOL)decompressDICOM:(NSString *)path to:(NSString*) dest deleteOriginal:(BOOL) deleteOriginal;

@end
