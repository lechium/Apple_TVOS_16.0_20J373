//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSLocale, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSLocalizedStringResourceSwiftWrapper : NSObject
{
    MISSING_TYPE *wrapped;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000286990
- (void).cxx_destruct;	// IMP=0x00000000002874f0
- (id)init;	// IMP=0x0000000000287490
- (id)localizeWithOptions:(id)arg1;	// IMP=0x00000000002872b0
- (id)localize;	// IMP=0x0000000000287140
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002870f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000286e70
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000286900
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000002863a0
- (id)initWithKey:(id)arg1 defaultValue:(id)arg2 table:(id)arg3 locale:(id)arg4 bundleURL:(id)arg5;	// IMP=0x0000000000286240
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, copy) NSLocale *locale;
@property(nonatomic, readonly) NSURL *bundleURL;
@property(nonatomic, readonly) NSString *table;
@property(nonatomic, readonly) NSString *defaultValue;
@property(nonatomic, readonly) NSString *key;

@end

