//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface UIKBViewTreeSnapshotter : NSObject
{
    NSMutableArray *_inputViews;	// 8 = 0x8
    UIView *_snapshotView;	// 16 = 0x10
}

+ (id)snapshotterForKeyboardView:(id)arg1 afterScreenUpdates:(_Bool)arg2;	// IMP=0x0060000000a16739
- (void).cxx_destruct;	// IMP=0x0000000000a16a7a
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)dealloc;	// IMP=0x0000000000a16918

@end

