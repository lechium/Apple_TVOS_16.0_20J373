//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject
{
    NSISEngine *engine;	// 8 = 0x8
    CDStruct_9ac54d62 linExp;	// 16 = 0x10
}

+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;	// IMP=0x001000000001f7dd
+ (id)acquireFromPoolForUseCase:(long long)arg1;	// IMP=0x001000000001f77b
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;	// IMP=0x001000000001f497
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;	// IMP=0x001000000001f435
+ (void)initialize;	// IMP=0x001000000001ba30
- (id)copyContentsAndReturnToPool;	// IMP=0x000000000001f5f9
- (void)returnToPool;	// IMP=0x000000000001f567
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000001f522
- (void)verifyInternalIntegrity;	// IMP=0x000000000001f132
- (void)scaleBy:(double)arg1;	// IMP=0x000000000001f11d
- (id)variablesArray;	// IMP=0x000000000001eef1
- (unsigned long long)variableCount;	// IMP=0x000000000001eee8
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ee56
- (void)enumerateVariables:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ecb7
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ec2e
- (id)description;	// IMP=0x000000000001ebab
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e80e
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;	// IMP=0x000000000001e43d
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;	// IMP=0x000000000001e2e5
- (_Bool)isConstant;	// IMP=0x000000000001e2b2
@property double constant;
- (double)incrementConstant:(double)arg1;	// IMP=0x000000000001e281
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001e08d
- (void)addVariable:(id)arg1 coefficient:(double)arg2;	// IMP=0x000000000001dcd9
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;	// IMP=0x000000000001da78
- (void)addExpression:(id)arg1 times:(double)arg2;	// IMP=0x000000000001d97e
- (void)dealloc;	// IMP=0x000000000001cd68
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;	// IMP=0x000000000001cb55
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;	// IMP=0x000000000001c7c6
- (double)coefficientForVariable:(id)arg1;	// IMP=0x000000000001c392
- (void)removeVariable:(id)arg1;	// IMP=0x000000000001c19c
@property(readonly) NSISEngine *engine;
- (unsigned long long)hash;	// IMP=0x000000000001bda2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001bc91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001bc40
- (id)initWithEngine:(id)arg1;	// IMP=0x000000000001bb2e
- (id)init;	// IMP=0x000000000001bacc

@end

