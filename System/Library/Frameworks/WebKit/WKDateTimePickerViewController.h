//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface WKDateTimePickerViewController : UIViewController
{
    struct CGSize _contentSize;	// 8 = 0x8
    struct RetainPtr<UIDatePicker> _datePicker;	// 24 = 0x18
    struct WeakObjCPtr<id<WKDateTimePickerViewControllerDelegate>> _delegate;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000003949d4
- (void).cxx_destruct;	// IMP=0x0000000000394996
- (struct CGSize)preferredContentSize;	// IMP=0x00000000003948e2
- (struct CGSize)preferredDatePickerSize;	// IMP=0x0000000000394858
- (struct UIEdgeInsets)datePickerInsets;	// IMP=0x000000000039483a
- (void)doneButtonPressed:(id)arg1;	// IMP=0x0000000000394809
- (void)resetButtonPressed:(id)arg1;	// IMP=0x00000000003947d8
- (void)viewDidLoad;	// IMP=0x0000000000393c8d
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000393c79
- (id)initWithDatePicker:(id)arg1;	// IMP=0x0000000000393bf6

@end

