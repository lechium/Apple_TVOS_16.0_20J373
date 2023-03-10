//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSelectionRect.h"

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect
{
    WebSelectionRect *webRect;	// 8 = 0x8
}

+ (id)rectsWithWebRects:(id)arg1;	// IMP=0x0060000000b635e4
+ (id)rectWithWebRect:(id)arg1;	// IMP=0x0060000000b63597
- (void).cxx_destruct;	// IMP=0x0000000000b63953
@property(retain, nonatomic) WebSelectionRect *webRect; // @synthesize webRect;
- (_Bool)isVertical;	// IMP=0x0000000000b638eb
- (_Bool)containsEnd;	// IMP=0x0000000000b638a7
- (_Bool)containsStart;	// IMP=0x0000000000b63863
- (id)range;	// IMP=0x0000000000b6385b
- (long long)writingDirection;	// IMP=0x0000000000b63817
- (struct CGRect)rect;	// IMP=0x0000000000b637b9
- (id)initWithWebRect:(id)arg1;	// IMP=0x0000000000b6352f

@end

