//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecKeyRSAPublic : NSObject
{
    id _secKeyRef;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000006bd7
@property(retain, nonatomic) id secKeyRef; // @synthesize secKeyRef=_secKeyRef;
- (id)dataRepresentation;	// IMP=0x0000000000006b77
- (id)encryptData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006a7b
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000068d1
- (id)initWithSecKeyRef:(id)arg1;	// IMP=0x0000000000006869

@end
