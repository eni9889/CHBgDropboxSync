//
//  CHBgDropboxSync.h
//  Passwords
//
//  Created by Chris Hulbert on 4/03/12.
//

#import <Foundation/Foundation.h>
#import <DropboxSDK/DropboxSDK.h>

@interface CHBgDropboxSync : NSObject<DBRestClientDelegate, UIAlertViewDelegate>

+ (void)start;
+ (void)forceStopIfRunning;
+ (void)clearLastSyncData;

@end
