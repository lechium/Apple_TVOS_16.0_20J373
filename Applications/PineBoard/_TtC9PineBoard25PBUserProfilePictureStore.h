//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC9PineBoard25PBUserProfilePictureStore : NSObject
{
    MISSING_TYPE *downloader;	// 8 = 0x8
    MISSING_TYPE *cache;	// 16 = 0x10
    MISSING_TYPE *identifierMapper;	// 24 = 0x18
    MISSING_TYPE *observersQueue;	// 32 = 0x20
    MISSING_TYPE *observers;	// 40 = 0x28
    MISSING_TYPE *profileManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00400000001fed60
- (id)init;	// IMP=0x00100000001fed00
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001fe360
- (void)addObserver:(id)arg1;	// IMP=0x00100000001fe120
- (void)prefetchProfilePictureForUserProfile:(id)arg1;	// IMP=0x00100000001fe0b0
- (void)profilePictureFileForAltDSID:(id)arg1 loadOnlyFromCache:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fced0
- (void)profilePictureFileForAltDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001fbf80
- (void)profilePictureFileForUserProfile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001fbdf0
- (id)initWithProfileManager:(id)arg1;	// IMP=0x00100000001fbaf0

@end

