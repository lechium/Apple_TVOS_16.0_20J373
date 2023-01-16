//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView
{
    NSString *m_string;	// 176 = 0xb0
    int m_type;	// 184 = 0xb8
    int m_edgeType;	// 188 = 0xbc
    UIFont *m_textFont;	// 192 = 0xc0
    _Bool m_animating;	// 200 = 0xc8
    _Bool m_isLongString;	// 201 = 0xc9
}

- (void).cxx_destruct;	// IMP=0x0000000000825cda
@property(nonatomic) _Bool isLongString; // @synthesize isLongString=m_isLongString;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000825c4b
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000000825bc9
- (struct CGRect)_calculateRectForExpandedHitRegion;	// IMP=0x0000000000825aec
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000825352
- (void)setEdgeType:(int)arg1;	// IMP=0x0000000000825250
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;	// IMP=0x0000000000824fa3

@end

