//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI31MultiDocumentTemplateController
{
    MISSING_TYPE *focusGuide;	// 264275272 = 0xfc08548
    MISSING_TYPE *viewHasAppearedOnce;	// 1224736766 = 0x48fffffe
    MISSING_TYPE *cancellables;	// 3347663104 = 0xc7894900
}

- (void).cxx_destruct;	// IMP=0x000000000032d930
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032d800
- (id)vuiIndexPathForPreferredFocusedViewIn:(id)arg1;	// IMP=0x000000000032d3a0
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;	// IMP=0x000000000032cf50
- (void)vui_viewWillAppear:(_Bool)arg1;	// IMP=0x000000000032cd10
- (void)vui_viewDidLoad;	// IMP=0x000000000032c890
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end

