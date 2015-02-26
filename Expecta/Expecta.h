#import <Foundation/Foundation.h>

//! Project version number for Expecta.
FOUNDATION_EXPORT double ExpectaVersionNumber;

//! Project version string for Expecta.
FOUNDATION_EXPORT const unsigned char ExpectaVersionString[];

#import <Expecta/ExpectaObject.h>
#import <Expecta/ExpectaSupport.h>
#import <Expecta/EXPMatchers.h>
#import <Expecta/EXPMatcherHelpers.h>
#import <Expecta/EXPDoubleTuple.h>
#import <Expecta/EXPFloatTuple.h>
#import <Expecta/EXPUnsupportedObject.h>
#import <Expecta/NSObject+Expecta.h>
#import <Expecta/NSValue+Expecta.h>

// Enable shorthand by default
#define expect(...) EXP_expect((__VA_ARGS__))
