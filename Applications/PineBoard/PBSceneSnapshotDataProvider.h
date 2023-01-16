//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSceneSnapshot, NSString, UIImage, XBSnapshotDataProviderContext;

@interface PBSceneSnapshotDataProvider : NSObject
{
    XBSnapshotDataProviderContext *_context;	// 8 = 0x8
    FBSceneSnapshot *_snapshot;	// 16 = 0x10
    UIImage *_cachedImage;	// 24 = 0x18
    double _scaleFactor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000110437
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(readonly, nonatomic) FBSceneSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, retain, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
- (void)invalidateImage;	// IMP=0x00100000001103cd
- (id)fetchImage;	// IMP=0x001000000010fff9
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;	// IMP=0x001000000010fe74
- (id)init;	// IMP=0x001000000010fe66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
