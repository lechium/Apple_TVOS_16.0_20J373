//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class FBSceneSnapshot, NSString;

__attribute__((visibility("hidden")))
@interface _UISceneSnapshotPresentationView : UIView
{
    FBSceneSnapshot *_snapshot;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006a0acd
@property(retain, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_snapshot;
- (id)initWithSnapshot:(id)arg1;	// IMP=0x00000000006a08ef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006a0843
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006a0797
- (id)init;	// IMP=0x00000000006a0639

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

