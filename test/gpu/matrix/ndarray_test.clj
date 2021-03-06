(ns gpu.matrix.ndarray-test
  (:require gpu.matrix
            [clojure.core.matrix.protocols :as mp]
            [clojure.core.matrix.compliance-tester :as compliance]
            [clojure.test :refer :all])
  (:import gpu.matrix.NDArray))

(deftest compliance-tests-1D
  (compliance/instance-test
    (mp/construct-matrix (NDArray/sample)
                         [1 2 3 4 5])))

(deftest compliance-tests-2D
  (compliance/instance-test
    (mp/construct-matrix (NDArray/sample)
                             [[1 2 3 4 5]
                              [6 7 8 9 10]
                              [11 12 13 14 15]
                              [16 17 18 19 20]
                              [21 22 23 24 25]])))

(deftest compliance-tests-3D
  (compliance/instance-test
    (mp/construct-matrix (NDArray/sample)
                             [[[1 2 3 4 5]
                               [6 7 8 9 10]
                               [11 12 13 14 15]
                               [16 17 18 19 20]
                               [21 22 23 24 25]]
                              [[1 2 3 4 5]
                               [6 7 8 9 10]
                               [11 12 13 14 15]
                               [16 17 18 19 20]
                               [21 22 23 24 25]]])))

