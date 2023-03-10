//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, VUIPageHeaderView;

__attribute__((visibility("hidden")))
@interface VUITVLibraryView : UIView
{
    UIView *_menuView;	// 8 = 0x8
    UIView *_detailView;	// 16 = 0x10
    NSString *_headerTitle;	// 24 = 0x18
    VUIPageHeaderView *_headerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001dc086
@property(retain, nonatomic) VUIPageHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;	// IMP=0x00000000001dbc7c
- (void)layoutSubviews;	// IMP=0x00000000001dbbcb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001dbbb4

@end

