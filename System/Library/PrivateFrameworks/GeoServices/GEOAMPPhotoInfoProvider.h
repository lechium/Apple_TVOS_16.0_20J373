//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaArtwork, GEOPDPhotoContent, NSString;

__attribute__((visibility("hidden")))
@interface GEOAMPPhotoInfoProvider : NSObject
{
    AMSMediaArtwork *_artwork;	// 8 = 0x8
    GEOPDPhotoContent *_templatePhotoContent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000013371d3
- (int)designatedURLType;	// IMP=0x00000000013371c8
- (id)bestPhotoForSize:(struct CGSize)arg1 options:(id)arg2;	// IMP=0x0000000001336be0
- (id)largestPhoto;	// IMP=0x0000000001336b21
- (double)sizeRatio;	// IMP=0x0000000001336ae3
- (id)initWithPhotoContent:(id)arg1;	// IMP=0x0000000001336778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
