//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKSelectPickerGroupHeaderView : UIView
{
    struct RetainPtr<UILabel> _label;	// 8 = 0x8
    struct RetainPtr<UIImageView> _collapseIndicatorView;	// 16 = 0x10
    struct WeakObjCPtr<WKSelectPickerTableViewController> _tableViewController;	// 24 = 0x18
    _Bool _collapsed;	// 32 = 0x20
    long long _section;	// 40 = 0x28
}

+ (double)preferredHeight;	// IMP=0x006000000039e126
+ (double)preferredMargin;	// IMP=0x006000000039e118
+ (id)preferredFont;	// IMP=0x006000000039e00f
- (id).cxx_construct;	// IMP=0x000000000039e1dc
- (void).cxx_destruct;	// IMP=0x000000000039e181
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (void)didTapHeader:(id)arg1;	// IMP=0x000000000039dfb7
- (void)setTableViewController:(id)arg1;	// IMP=0x000000000039dfa3
- (void)setCollapsed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000039ddfa
- (id)initWithGroupName:(id)arg1 section:(long long)arg2;	// IMP=0x000000000039d8d0

@end
