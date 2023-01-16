//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol VKMercatorTerrainHeightProvider;

__attribute__((visibility("hidden")))
@interface VKMercatorTerrainHeightCache : NSObject
{
    id <VKMercatorTerrainHeightProvider> _heightProvider;	// 8 = 0x8
    struct map<md::Anchor *, float, std::less<md::Anchor *>, std::allocator<std::pair<md::Anchor *const, float>>> _anchorToHeight;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000006c3080
- (void).cxx_destruct;	// IMP=0x00000000006c305c
@property(nonatomic) __weak id <VKMercatorTerrainHeightProvider> heightProvider; // @synthesize heightProvider=_heightProvider;
- (void)invalidateRect:(const void *)arg1;	// IMP=0x00000000006c2f55
- (void)removeCachedValueForAnchor:(void *)arg1;	// IMP=0x00000000006c2ef9
- (double)heightForAnchor:(void *)arg1;	// IMP=0x00000000006c2d82

@end

