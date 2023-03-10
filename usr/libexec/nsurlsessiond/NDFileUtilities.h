//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NDFileUtilities : NSObject
{
}

+ (_Bool)itemShouldBePurged:(id)arg1;	// IMP=0x0040000000031f89
+ (void)markItemAsPurged:(id)arg1;	// IMP=0x0010000000031f3d
+ (id)fetchStreamingZipModificationDate:(id)arg1;	// IMP=0x0010000000031eb7
+ (void)removeStreamingZipModificationDate:(id)arg1;	// IMP=0x0010000000031e55
+ (void)updateStreamingZipModificationDate:(id)arg1;	// IMP=0x0010000000031dbf
+ (void)setDaemonWorkState:(_Bool)arg1;	// IMP=0x0010000000031c2f
+ (id)defaultDownloadDirectoryForBundleID:(id)arg1;	// IMP=0x0010000000031b91
+ (id)defaultDownloadDirectoryContainer;	// IMP=0x001000000003192d
+ (void)createDirectoryAtURL:(id)arg1;	// IMP=0x00100000000317af
+ (void)createDirectoryAtPath:(id)arg1;	// IMP=0x0010000000031631
+ (_Bool)createDataVaultDirectoryAtPath:(id)arg1;	// IMP=0x0010000000031182
+ (void)removeItemAtURL:(id)arg1;	// IMP=0x001000000003100a
+ (void)removeItemAtPath:(id)arg1;	// IMP=0x0010000000030e92
+ (id)nsurlsessiondLaunchdPath;	// IMP=0x0010000000030e20
+ (id)sessionPath:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000030d51
+ (id)bundleManagerPath:(id)arg1;	// IMP=0x0010000000030c88
+ (id)nsurlsessiondPath;	// IMP=0x0010000000030bda

@end

