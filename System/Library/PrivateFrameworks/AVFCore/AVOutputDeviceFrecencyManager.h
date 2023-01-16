//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVOutputDeviceFrecencyManager : NSObject
{
}

+ (id)_frecentsWriter;	// IMP=0x00800000000ca349
+ (_Bool)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)arg1;	// IMP=0x00800000000ca073
+ (id)_frecentsReaderAfterMigrationIfNecessary;	// IMP=0x00800000000c9e39
+ (id)_frecentsFilePath;	// IMP=0x00800000000c9ca6
+ (id)_frecentsContainerPath;	// IMP=0x00800000000c9c05
+ (id)_applicationSupportPath;	// IMP=0x00800000000c9b89
+ (double)frecencyScoreForDeviceID:(id)arg1;	// IMP=0x00800000000c9a14
+ (void)updateFrecencyListForDeviceID:(id)arg1;	// IMP=0x00800000000c936a

@end
