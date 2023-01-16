//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface ICDResponse : NSObject
{
    NSString *_MIMEType;	// 8 = 0x8
    unsigned long long _responseCode;	// 16 = 0x10
    NSDictionary *_responseHeaderFields;	// 24 = 0x18
    NSData *_responseData;	// 32 = 0x20
    NSURL *_responseDataFileURL;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

+ (id)responseWithResponse:(id)arg1;	// IMP=0x0040000000089c46
+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;	// IMP=0x0010000000089b89
- (void).cxx_destruct;	// IMP=0x0020000000089b40
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURL *responseDataFileURL; // @synthesize responseDataFileURL=_responseDataFileURL;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSDictionary *responseHeaderFields; // @synthesize responseHeaderFields=_responseHeaderFields;
@property(readonly, nonatomic) unsigned long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
- (id)description;	// IMP=0x0010000000089a51
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;	// IMP=0x0010000000089938

@end

