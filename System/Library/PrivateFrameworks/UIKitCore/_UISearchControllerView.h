//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface _UISearchControllerView : UIView
{
    _Bool __ensureSystemInputViewAboveSearchBarContainerView;	// 176 = 0xb0
}

@property(nonatomic) _Bool _ensureSystemInputViewAboveSearchBarContainerView; // @synthesize _ensureSystemInputViewAboveSearchBarContainerView=__ensureSystemInputViewAboveSearchBarContainerView;
- (void)sendSubviewToBack:(id)arg1;	// IMP=0x0000000000cc43f8
- (void)bringSubviewToFront:(id)arg1;	// IMP=0x0000000000cc43a2
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;	// IMP=0x0000000000cc434c
- (void)_ensureCarPlayLimitedUIIsOnTop;	// IMP=0x0000000000cc4346
- (void)_ensureContainerIsOnTop;	// IMP=0x0000000000cc4300
- (void)_ensureViewOfClassIsOnTop:(Class)arg1;	// IMP=0x0000000000cc41b8
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000cc4105

@end

