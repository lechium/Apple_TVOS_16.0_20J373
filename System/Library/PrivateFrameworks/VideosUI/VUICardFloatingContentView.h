//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/_TVCardFloatingContentView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUICardFloatingContentView : _TVCardFloatingContentView
{
}

+ (id)viewWithExistingView:(id)arg1 bounds:(struct CGRect)arg2 focused:(_Bool)arg3 subview:(id)arg4 hideShadow:(_Bool)arg5;	// IMP=0x00100000001dc0ee
+ (id)viewWithExistingView:(id)arg1 bounds:(struct CGRect)arg2 focused:(_Bool)arg3 subview:(id)arg4;	// IMP=0x00100000001dc0d9
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000000001dc41a
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000000001dc408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

