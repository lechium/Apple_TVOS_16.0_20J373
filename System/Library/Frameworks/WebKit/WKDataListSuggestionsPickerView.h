//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPickerView.h>

@class WKDataListSuggestionsControl;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsPickerView : UIPickerView
{
    WKDataListSuggestionsControl *_control;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000381250
@property(nonatomic) __weak WKDataListSuggestionsControl *control; // @synthesize control=_control;
- (void)controlEndEditing;	// IMP=0x00000000003811df
- (void)controlBeginEditing;	// IMP=0x00000000003811d9
- (id)controlView;	// IMP=0x00000000003811d0

@end

