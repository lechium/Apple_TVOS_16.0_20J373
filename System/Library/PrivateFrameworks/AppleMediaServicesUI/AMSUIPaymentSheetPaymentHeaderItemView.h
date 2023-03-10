//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKPaymentContentItem, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUIPaymentSheetPaymentHeaderItemView : UIView
{
    PKPaymentContentItem *_contentItem;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

+ (id)headerViewWithContentItem:(id)arg1;	// IMP=0x006000000003eaef
- (void).cxx_destruct;	// IMP=0x000000000003f841
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) PKPaymentContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003f79b
- (struct CGImage *)image;	// IMP=0x000000000003f74f
- (void)_setupSubviews;	// IMP=0x000000000003ee8e
- (id)_formattedText;	// IMP=0x000000000003ebcd
- (id)initWithContentItem:(id)arg1;	// IMP=0x000000000003eb38

@end

