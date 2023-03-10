//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageView.h"

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorView : UIImageView
{
    struct CGSize _cachedSize;	// 8 = 0x8
    long long _page;	// 24 = 0x18
}

@property(nonatomic) long long page; // @synthesize page=_page;
- (id)debugDescription;	// IMP=0x0000000000616d4e
- (_Bool)isInvalidated;	// IMP=0x0000000000616d39
- (void)invalidate;	// IMP=0x0000000000616d24
- (struct CGSize)sizeForImage:(id)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000000006169bd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000616932
- (void)setImage:(id)arg1;	// IMP=0x00000000006166f4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000616615
- (void)updateSymbolConfigurationForTraitCollection;	// IMP=0x0000000000616535
- (void)prepare;	// IMP=0x00000000006164d7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000061648b
- (id)initWithImage:(id)arg1;	// IMP=0x000000000061643f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006163e2

@end

