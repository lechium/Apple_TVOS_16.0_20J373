//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSJSError : IKJSObject
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_message;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000011ddd
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
- (id)error;	// IMP=0x0000000000011c71
- (id)description;	// IMP=0x0000000000011aa1
- (id)init;	// IMP=0x0000000000011a3b

@end

