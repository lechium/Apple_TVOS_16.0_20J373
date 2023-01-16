//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKSecureCodingCGColorWrapper : NSObject
{
    struct RetainPtr<CGColor *> m_wrappedColor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000013409e
- (id).cxx_construct;	// IMP=0x0000000000134272
- (void).cxx_destruct;	// IMP=0x0000000000134252
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x00000000001341f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013410b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001340a6
@property(readonly, nonatomic) struct CGColor *wrappedColor;

@end
