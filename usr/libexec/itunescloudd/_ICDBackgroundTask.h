//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, NSString;

@interface _ICDBackgroundTask : NSObject
{
    NSString *_name;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000108004
+ (id)taskWithType:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000106c45
- (void).cxx_destruct;	// IMP=0x0020000000106c1d
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000106b44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000106aa7
- (id)description;	// IMP=0x0010000000106a99
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001069db

@end

