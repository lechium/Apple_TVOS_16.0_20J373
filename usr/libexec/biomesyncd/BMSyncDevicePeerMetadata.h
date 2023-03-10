//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMSyncDevicePeerMetadata : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_model;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
}

+ (id)devicePeerMetadata;	// IMP=0x0020000000006c3c
- (void).cxx_destruct;	// IMP=0x0020000000007164
@property(readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryRepresentation;	// IMP=0x001000000000702a
- (id)initFromDictionary:(id)arg1;	// IMP=0x0010000000006edb
- (unsigned long long)hash;	// IMP=0x0010000000006e55
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006cb9
- (id)initWithName:(id)arg1 model:(id)arg2 platform:(long long)arg3;	// IMP=0x0010000000006b97

@end

