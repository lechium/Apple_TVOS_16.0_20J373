//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ErrorHandlerResponse : NSObject
{
    long long _responseType;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(nonatomic) long long responseType; // @synthesize responseType=_responseType;
- (void)dealloc;	// IMP=0x0010000000197165

@end

