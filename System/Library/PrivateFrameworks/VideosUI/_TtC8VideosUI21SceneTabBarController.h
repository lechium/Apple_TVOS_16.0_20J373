//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI21SceneTabBarController : NSObject
{
    MISSING_TYPE *_tabBarInfo;	// 20 = 0x14
    MISSING_TYPE *previousSelectedIndex;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000280a50
- (void)configureDebugUIGestureWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002809b0
- (void)updateWithTabBarItems:(id)arg1 setSelectedIndexFromDefaults:(_Bool)arg2 appContext:(id)arg3;	// IMP=0x0000000000280760
- (void)setSelectedIndexForTabBarItemIdentifier:(id)arg1;	// IMP=0x000000000027f440
- (id)init;	// IMP=0x000000000027f230
@property(nonatomic) _Bool tabBarHidden;
- (_Bool)isTabBarHidden;	// IMP=0x000000000027ee50
@property(nonatomic) unsigned long long selectedIndex;
@property(nonatomic, readonly) NSArray *tabBarItems;

@end

