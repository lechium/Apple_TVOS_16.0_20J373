//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, _UICalendarDataModel, _UIDatePickerLinkedLabel;

__attribute__((visibility("hidden")))
@interface _UICalendarWeekdayView : UIView
{
    struct {
        _Bool rebuildLabels;
    } _flags;	// 8 = 0x8
    NSArray *_labels;	// 16 = 0x10
    _UICalendarDataModel *_dataModel;	// 24 = 0x18
    _UIDatePickerLinkedLabel *_sizingLabel;	// 32 = 0x20
    double _preferredLabelWidth;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000e39cf9
@property(nonatomic) double preferredLabelWidth; // @synthesize preferredLabelWidth=_preferredLabelWidth;
@property(readonly, nonatomic) _UIDatePickerLinkedLabel *sizingLabel; // @synthesize sizingLabel=_sizingLabel;
@property(readonly, nonatomic) _UICalendarDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000e39c21
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000e39c0f
- (void)layoutSubviews;	// IMP=0x0000000000e398bb
- (void)didUpdateFontDesign;	// IMP=0x0000000000e398a9
- (void)didUpdateLocale;	// IMP=0x0000000000e39897
- (void)didUpdateCalendar;	// IMP=0x0000000000e39885
- (void)_setNeedsRebuildLabels;	// IMP=0x0000000000e39868
- (void)_rebuildLabels;	// IMP=0x0000000000e38e7a
- (void)_updateFont;	// IMP=0x0000000000e38a55
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000e38975
- (id)initWithDataModel:(id)arg1;	// IMP=0x0000000000e388ca

@end

