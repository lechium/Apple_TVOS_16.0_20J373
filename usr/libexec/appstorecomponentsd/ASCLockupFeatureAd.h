//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCScreenshots, ASCTrailers, NSString;

@interface ASCLockupFeatureAd : NSObject
{
    _Bool _isEditorsChoice;	// 8 = 0x8
    float _productRating;	// 12 = 0xc
    NSString *_productRatingBadge;	// 16 = 0x10
    NSString *_productDescription;	// 24 = 0x18
    ASCScreenshots *_screenshots;	// 32 = 0x20
    ASCTrailers *_trailers;	// 40 = 0x28
    NSString *_developerName;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000dd6d
- (void).cxx_destruct;	// IMP=0x002000000000e884
@property(readonly, copy, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(readonly, copy, nonatomic) ASCTrailers *trailers; // @synthesize trailers=_trailers;
@property(readonly, copy, nonatomic) ASCScreenshots *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, copy, nonatomic) NSString *productDescription; // @synthesize productDescription=_productDescription;
@property(readonly, copy, nonatomic) NSString *productRatingBadge; // @synthesize productRatingBadge=_productRatingBadge;
@property(readonly, nonatomic) float productRating; // @synthesize productRating=_productRating;
@property(readonly, nonatomic) _Bool isEditorsChoice; // @synthesize isEditorsChoice=_isEditorsChoice;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000e28d
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000e101
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000df70
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000dd75
- (id)initWithEditorsChoice:(_Bool)arg1 productRating:(float)arg2 productRatingBadge:(id)arg3 productDescription:(id)arg4 screenshots:(id)arg5 trailers:(id)arg6 developerName:(id)arg7;	// IMP=0x001000000000dc1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

