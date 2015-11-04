public class TestEarlyGC extends ClassLoader {

  static TestEarlyGC[] a = new TestEarlyGC[10];

  // Jeff Sturm writes:
  // Reconstructed from bytecode (and memory).  The singleton pattern
  // is used as a class finalizer.
  // public class C {
  //   private static C c;
  //   public C() {
  //     c = this;
  //   }
  //   protected void finalize() {
  //     System.out.println("finalized");
  //   }
  // }
  byte[] code = {
    -54,-2,-70,-66,0,3,0,45,0,32,1,0,1,67,7,0,
    1,1,0,16,106,97,118,97,47,108,97,110,103,47,79,98,
    106,101,99,116,7,0,3,1,0,1,99,1,0,3,76,67,
    59,1,0,6,60,105,110,105,116,62,1,0,3,40,41,86,
    1,0,4,67,111,100,101,12,0,7,0,8,10,0,4,0,
    10,12,0,5,0,6,9,0,2,0,12,1,0,15,76,105,
    110,101,78,117,109,98,101,114,84,97,98,108,101,1,0,8,
    102,105,110,97,108,105,122,101,1,0,16,106,97,118,97,47,
    108,97,110,103,47,83,121,115,116,101,109,7,0,16,1,0,
    3,111,117,116,1,0,21,76,106,97,118,97,47,105,111,47,
    80,114,105,110,116,83,116,114,101,97,109,59,12,0,18,0,
    19,9,0,17,0,20,1,0,9,102,105,110,97,108,105,122,
    101,100,8,0,22,1,0,19,106,97,118,97,47,105,111,47,
    80,114,105,110,116,83,116,114,101,97,109,7,0,24,1,0,
    7,112,114,105,110,116,108,110,1,0,21,40,76,106,97,118,
    97,47,108,97,110,103,47,83,116,114,105,110,103,59,41,86,
    12,0,26,0,27,10,0,25,0,28,1,0,10,83,111,117,
    114,99,101,70,105,108,101,1,0,6,67,46,106,97,118,97,
    0,33,0,2,0,4,0,0,0,1,0,10,0,5,0,6,
    0,0,0,2,0,1,0,7,0,8,0,1,0,9,0,0,
    0,33,0,1,0,1,0,0,0,9,42,-73,0,11,42,-77,
    0,13,-79,0,0,0,1,0,14,0,0,0,6,0,1,0,
    4,0,5,0,4,0,15,0,8,0,1,0,9,0,0,0,
    33,0,2,0,1,0,0,0,9,-78,0,21,18,23,-74,0,
    29,-79,0,0,0,1,0,14,0,0,0,6,0,1,0,0,
    0,9,0,1,0,30,0,0,0,2,0,31
  };

  TestEarlyGC() throws Throwable {
    defineClass("C", code, 0, code.length).newInstance();
  }

  public static void main(String[] args) {
    Runtime r = Runtime.getRuntime();

    try {
      for (int n = 0; n < a.length; n++) {
        a[n] = new TestEarlyGC();
        r.gc();
        r.runFinalization();
        Thread.yield();
      }
    } catch (Throwable t) {
      t.printStackTrace();
    }
  }
}
