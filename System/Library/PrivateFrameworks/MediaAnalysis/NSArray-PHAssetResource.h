//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (PHAssetResource)
- (id)vcp_highResImageResourcesForAsset:(id)arg1;	// IMP=0x009000000000f47e
- (float)vcp_getFpsRate;	// IMP=0x009000000000f35e
- (id)vcp_avAsset:(_Bool)arg1;	// IMP=0x009000000000f187
- (id)vcp_localMovieResourcesSorted:(_Bool)arg1;	// IMP=0x009000000000ef65
- (id)vcp_photoResourcesSorted:(_Bool)arg1;	// IMP=0x009000000000ed65
- (id)vcp_localPhotoResourcesSorted:(_Bool)arg1;	// IMP=0x009000000000eb43
- (id)vcp_adjustmentsResource;	// IMP=0x009000000000e9e3
- (id)vcp_originalVideoResource;	// IMP=0x009000000000e864
- (id)vcp_originalResource;	// IMP=0x009000000000e6e5
- (id)vcp_smallMovieDerivativeResource;	// IMP=0x009000000000e666
- (id)vcp_smallResourceMeetingCriteria:(CDUnknownBlockType)arg1;	// IMP=0x009000000000e423
- (id)vcp_thumbnailResource;	// IMP=0x009000000000e40c
- (_Bool)vcp_hasLocalSlowmo:(_Bool)arg1;	// IMP=0x009000000000e3b2
- (_Bool)vcp_hasLocalAdjustments;	// IMP=0x009000000000e251
- (_Bool)vcp_hasLocalMovie:(_Bool)arg1;	// IMP=0x009000000000e0a7
- (_Bool)vcp_hasLocalPhoto:(_Bool)arg1;	// IMP=0x009000000000defd
- (_Bool)vcp_isOriginalLocal;	// IMP=0x009000000000dea5
- (id)vcp_resourceWithType:(unsigned long long)arg1;	// IMP=0x009000000000dd38
- (void)persistenceDelegate_enumerateInChunksOfSize:(unsigned long long)arg1 withOverageAllowance:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00900000000f981c
@end

