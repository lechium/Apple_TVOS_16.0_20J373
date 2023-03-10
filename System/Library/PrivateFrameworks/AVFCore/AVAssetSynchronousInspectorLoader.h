//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetInspector;

__attribute__((visibility("hidden")))
@interface AVAssetSynchronousInspectorLoader
{
    AVAssetInspector *_assetInspector;	// 16 = 0x10
}

- (_Bool)isCompatibleWithSavedPhotosAlbum;	// IMP=0x00000000000e84c9
- (_Bool)isComposable;	// IMP=0x00000000000e84ac
- (_Bool)isReadable;	// IMP=0x00000000000e848f
- (_Bool)isExportable;	// IMP=0x00000000000e8472
- (_Bool)isPlayable;	// IMP=0x00000000000e8455
- (id)lyrics;	// IMP=0x00000000000e8438
- (CDStruct_1b6d18a9)duration;	// IMP=0x00000000000e83f6
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e83e3
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e83d1
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e83c6
- (id)assetInspector;	// IMP=0x00000000000e83b5
- (unsigned long long)hash;	// IMP=0x00000000000e8398
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e832c
- (void)dealloc;	// IMP=0x00000000000e82ea
- (id)initWithAssetInspector:(id)arg1;	// IMP=0x00000000000e8293

@end

