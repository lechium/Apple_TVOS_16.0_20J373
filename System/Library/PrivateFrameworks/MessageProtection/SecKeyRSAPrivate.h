//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecKeyRSAPrivate : NSObject
{
    id _secKeyRef;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000011cff
@property(retain, nonatomic) id secKeyRef; // @synthesize secKeyRef=_secKeyRef;
- (id)dataRepresentation;	// IMP=0x0000000000011c9f
- (id)decryptData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011ba3
- (id)publicKey;	// IMP=0x0000000000011b26
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011985
- (id)init;	// IMP=0x0000000000011795

@end

