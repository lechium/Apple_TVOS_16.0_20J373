//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteResponseCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_mediaContentTasteCacheDirectoryPath;	// 16 = 0x10
}

+ (id)sharedCloudContentTasteResponseCacheManager;	// IMP=0x0040000000096502
- (void).cxx_destruct;	// IMP=0x0020000000095c74
- (id)_prepareCachedResponseFromArchiveAtPath:(id)arg1;	// IMP=0x00100000000959cc
- (id)_prepareArchiveWithContentTasteReponse:(id)arg1;	// IMP=0x001000000009587c
- (id)_mediaContentTasteCacheFilePathForAccount:(id)arg1;	// IMP=0x0010000000095690
- (void)removeCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x0010000000095603
- (void)removeAllCachedContentTasteResponses;	// IMP=0x00100000000955b8
- (_Bool)setCachedContentTasteUpdateResponse:(id)arg1 forConnectionConfiguration:(id)arg2;	// IMP=0x00100000000954b3
- (id)getCachedContentTasteResponseForConnectionConfiguration:(id)arg1;	// IMP=0x00100000000953b8
- (id)_init;	// IMP=0x0010000000095329
- (MISSING_TYPE *)init;	// IMP=0x00100000000952e7

@end

