//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSUUID;

__attribute__((visibility("hidden")))
@interface CATInitializingIDSServiceConnectionContentReject : NSObject
{
    NSUUID *_connectionIdentifier;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)instanceWithDictionary:(id)arg1;	// IMP=0x0010000000041b4e
- (void).cxx_destruct;	// IMP=0x0000000000041c86
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) long long contentType;
- (id)initWithConnectionIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00000000000419a1

@end

