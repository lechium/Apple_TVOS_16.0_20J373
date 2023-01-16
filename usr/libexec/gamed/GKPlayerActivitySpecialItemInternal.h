//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface GKPlayerActivitySpecialItemInternal
{
    long long _activityType;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
    NSString *_alternateMessage;	// 24 = 0x18
    NSString *_sfSymbol;	// 32 = 0x20
    NSDate *_timeStamp;	// 40 = 0x28
    NSString *_instrumentationKey;	// 48 = 0x30
}

+ (id)constantToTypeMap;	// IMP=0x004000000008e3c5
+ (id)typeToConstantMap;	// IMP=0x001000000008e312
+ (id)secureCodedPropertyKeys;	// IMP=0x001000000008df59
- (void).cxx_destruct;	// IMP=0x002000000008e6b1
@property(retain, nonatomic) NSString *instrumentationKey; // @synthesize instrumentationKey=_instrumentationKey;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *sfSymbol; // @synthesize sfSymbol=_sfSymbol;
@property(retain, nonatomic) NSString *alternateMessage; // @synthesize alternateMessage=_alternateMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long activityType; // @synthesize activityType=_activityType;
- (id)description;	// IMP=0x001000000008e478
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000008e0a4

@end

