//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface SRError : NSError
{
}

+ (id)errorWithCode:(long long)arg1;	// IMP=0x0040000000069924
+ (id)errorWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x00100000000698cc
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0010000000069874
- (id)initWithCode:(long long)arg1;	// IMP=0x0040000000069a26
- (id)initWithCode:(long long)arg1 localizedFailureReason:(id)arg2;	// IMP=0x0010000000069957
- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0010000000069938

@end
