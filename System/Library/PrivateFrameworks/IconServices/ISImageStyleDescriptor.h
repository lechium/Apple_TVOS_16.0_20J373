//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFColor, NSUUID;

__attribute__((visibility("hidden")))
@interface ISImageStyleDescriptor : NSObject
{
    _Bool _templateVariant;	// 8 = 0x8
    _Bool _selectedVariant;	// 9 = 0x9
    IFColor *_tintColor;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000042ac
+ (id)defaultStyleDescriptor;	// IMP=0x0010000000004257
- (void).cxx_destruct;	// IMP=0x00000000000045ad
@property(retain, nonatomic) IFColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool selectedVariant; // @synthesize selectedVariant=_selectedVariant;
@property(nonatomic) _Bool templateVariant; // @synthesize templateVariant=_templateVariant;
@property(readonly) NSUUID *digest; // @dynamic digest;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004405
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000437e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000042b4

@end

