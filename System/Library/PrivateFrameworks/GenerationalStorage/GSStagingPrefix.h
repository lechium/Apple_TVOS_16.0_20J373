//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface GSStagingPrefix : NSObject
{
    unsigned char _volumeUUID[16];	// 8 = 0x8
    int _deviceID;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    NSArray *_pathComponents;	// 40 = 0x28
    NSData *_extension;	// 48 = 0x30
    long long _sandboxHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000bba5
- (void)cleanupStagingPath:(id)arg1;	// IMP=0x000000000000bb4c
- (_Bool)isStagedPath:(id)arg1;	// IMP=0x000000000000b976
- (id)stagingPathforCreatingAdditionWithError:(id *)arg1;	// IMP=0x000000000000b811
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b7a8
- (unsigned long long)hash;	// IMP=0x000000000000b792
- (id)description;	// IMP=0x000000000000b769
- (void)dealloc;	// IMP=0x000000000000b726
- (void)finalize;	// IMP=0x000000000000b6e3
- (void)_connectionWithDaemonWasLost;	// IMP=0x000000000000b6cf
- (void)_invalidate:(_Bool)arg1;	// IMP=0x000000000000b501
- (_Bool)_refreshWithError:(id *)arg1;	// IMP=0x000000000000b1e0
- (id)initWithDocumentID:(id)arg1;	// IMP=0x000000000000b173
- (id)init;	// IMP=0x000000000000b107

@end

