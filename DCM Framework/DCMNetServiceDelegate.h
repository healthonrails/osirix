//
//  DCMNetServiceDelegate.h
//  OsiriX
//
//  Created by Lance Pysher on 7/13/05.
/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/


#import <Cocoa/Cocoa.h>


@interface DCMNetServiceDelegate : NSObject {

	NSNetServiceBrowser *_dicomNetBrowser;
	NSMutableArray *_dicomServices;


}
+ (NSString*) gethostnameAndPort: (int*) port forService:(NSNetService*) sender;
+ (NSHost*) currentHost;
+ (NSArray *) DICOMServersList;
+ (NSArray *) DICOMServersListSendOnly: (BOOL) send QROnly:(BOOL) QR;
+ (id)sharedNetServiceDelegate;
- (void)update;
- (NSArray *)dicomServices;
- (int)portForNetService:(NSNetService *)netService;

@end
